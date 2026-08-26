# create turtlebot_delivery_norasheikhly by (mkdir)
# mkdir -p to add src under the ws
# in src:
   # create interface package delivery_mission_interfaces (ros2 pkg create...)
   # build action folder add file by (nano) to DeliveryMisison.action
      # .action file will have 
        #float32 speed
        #float32 pickup_duration
        #float32 delivery_time
        #float32 timeout
        #---
        #bool success
        #string message
        #---
        #float32 remaining_time
        #float32 pickup_progress
# Modift CMakelists.txt 
# Modify package.xml to add dependencies
# Build the interface package from the created ws then source it
# verify: ros2 interface show delivery_mission_interface/action/DeliveryMission to make sure that we have the correct output (action plan)

# Create Action Server package:
# in src create pkg ament_python and delivery_mission_controller
# add dependencies 
 # <depend>geometry_msgs</depend>
 # <depend>delivery_mission_interfaces</depend>
 # <depend>rclpy</depend>
# add delivery_mission_server_node.py which has the executed code
# Modify setup.py add entry points
# Modify package.xml
# build packsge and source and test below



import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse

from geometry_msgs.msg import Twist
from delivery_mission_interfaces.action import DeliveryMission


class DeliveryMissionServer(Node):

    def __init__(self):
        super().__init__('delivery_mission_server')

        self.cmd_vel_publisher = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        self.mission_running = False

        self.action_server = ActionServer(
            self,
            DeliveryMission,
            'delivery_mission',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback
        )

        self.get_logger().info(
            'Delivery Mission Server is ready.'
        )

    # ---------------------------------------------------------
    # GOAL CALLBACK
    # ---------------------------------------------------------

    def goal_callback(self, goal_request):

        # Only one mission can run at a time
        if self.mission_running:
            self.get_logger().warn(
                'A mission is already running. Goal rejected.'
            )
            return GoalResponse.REJECT

        # Timeout must be positive
        if goal_request.timeout <= 0.0:
            self.get_logger().warn(
                'Timeout must be greater than zero. Goal rejected.'
            )
            return GoalResponse.REJECT

        self.get_logger().info(
            'Delivery mission goal accepted.'
        )

        return GoalResponse.ACCEPT

    # ---------------------------------------------------------
    # CANCEL CALLBACK
    # ---------------------------------------------------------

    def cancel_callback(self, goal_handle):

        self.get_logger().info(
            'Cancel request received.'
        )

        # Cancellation is allowed at any time
        return CancelResponse.ACCEPT

    # ---------------------------------------------------------
    # EXECUTE CALLBACK
    # ---------------------------------------------------------

    def execute_callback(self, goal_handle):

        self.mission_running = True

        goal = goal_handle.request

        speed = goal.speed
        pickup_duration = goal.pickup_duration
        delivery_time = goal.delivery_time
        timeout = goal.timeout

        self.get_logger().info(
            f'Mission started: speed={speed}, '
            f'pickup_duration={pickup_duration}, '
            f'delivery_time={delivery_time}, '
            f'timeout={timeout}'
        )

        start_time = time.time()

        # =====================================================
        # PHASE 1: GO TO PICKUP LOCATION
        # =====================================================

        self.get_logger().info(
            'Phase 1: Moving to pickup location.'
        )

        pickup_start = time.time()

        while True:

            # -------------------------------------------------
            # CHECK CANCEL FIRST
            # -------------------------------------------------

            if goal_handle.is_cancel_requested:

                self.stop_robot()

                goal_handle.canceled()

                result = DeliveryMission.Result()
                result.success = False
                result.message = (
                    'Mission cancelled during pickup.'
                )

                self.mission_running = False

                return result

            # -------------------------------------------------
            # TIME CALCULATIONS
            # -------------------------------------------------

            elapsed = time.time() - start_time
            remaining_time = timeout - elapsed

            # -------------------------------------------------
            # CHECK TIMEOUT
            # -------------------------------------------------

            if elapsed >= timeout:

                self.stop_robot()

                goal_handle.abort()

                result = DeliveryMission.Result()
                result.success = False
                result.message = (
                    'Mission timed out during pickup.'
                )

                self.mission_running = False

                return result

            pickup_elapsed = time.time() - pickup_start

            # Pickup completed
            if pickup_elapsed >= pickup_duration:
                break

            # -------------------------------------------------
            # MOVE FORWARD
            # -------------------------------------------------

            twist = Twist()
            twist.linear.x = speed
            twist.angular.z = 0.0

            self.cmd_vel_publisher.publish(twist)

            # -------------------------------------------------
            # FEEDBACK
            # -------------------------------------------------

            feedback = DeliveryMission.Feedback()

            feedback.remaining_time = max(
                0.0,
                remaining_time
            )

            if pickup_duration > 0.0:
                feedback.pickup_progress = min(
                    100.0,
                    (pickup_elapsed / pickup_duration) * 100.0
                )
            else:
                feedback.pickup_progress = 100.0

            goal_handle.publish_feedback(feedback)

            time.sleep(0.1)

        # Stop at pickup location
        self.stop_robot()

        self.get_logger().info(
            'Pickup location reached.'
        )

        # =====================================================
        # PHASE 2: PAUSE
        # =====================================================

        self.get_logger().info(
            'Phase 2: Pausing at pickup location.'
        )

        # No pause duration exists in the Action definition.
        # Therefore the robot pauses briefly before delivery.
        pause_duration = 2.0

        pause_start = time.time()

        while True:

            # -------------------------------------------------
            # CHECK CANCEL FIRST
            # -------------------------------------------------

            if goal_handle.is_cancel_requested:

                self.stop_robot()

                goal_handle.canceled()

                result = DeliveryMission.Result()
                result.success = False
                result.message = (
                    'Mission cancelled during pause.'
                )

                self.mission_running = False

                return result

            # -------------------------------------------------
            # TIME CALCULATIONS
            # -------------------------------------------------

            elapsed = time.time() - start_time
            remaining_time = timeout - elapsed

            # -------------------------------------------------
            # CHECK TIMEOUT
            # -------------------------------------------------

            if elapsed >= timeout:

                self.stop_robot()

                goal_handle.abort()

                result = DeliveryMission.Result()
                result.success = False
                result.message = (
                    'Mission timed out during pause.'
                )

                self.mission_running = False

                return result

            pause_elapsed = time.time() - pause_start

            if pause_elapsed >= pause_duration:
                break

            # Keep robot stopped
            self.stop_robot()

            # -------------------------------------------------
            # FEEDBACK
            # -------------------------------------------------

            feedback = DeliveryMission.Feedback()

            feedback.remaining_time = max(
                0.0,
                remaining_time
            )

            feedback.pickup_progress = 100.0

            goal_handle.publish_feedback(feedback)

            time.sleep(0.1)

        # =====================================================
        # PHASE 3: DELIVERY
        # =====================================================

        self.get_logger().info(
            'Phase 3: Moving to delivery location.'
        )

        delivery_start = time.time()

        while True:

            # -------------------------------------------------
            # CHECK CANCEL FIRST
            # -------------------------------------------------

            if goal_handle.is_cancel_requested:

                self.stop_robot()

                goal_handle.canceled()

                result = DeliveryMission.Result()
                result.success = False
                result.message = (
                    'Mission cancelled during delivery.'
                )

                self.mission_running = False

                return result

            # -------------------------------------------------
            # TIME CALCULATIONS
            # -------------------------------------------------

            elapsed = time.time() - start_time
            remaining_time = timeout - elapsed

            # -------------------------------------------------
            # CHECK TIMEOUT
            # -------------------------------------------------

            if elapsed >= timeout:

                self.stop_robot()

                goal_handle.abort()

                result = DeliveryMission.Result()
                result.success = False
                result.message = (
                    'Mission timed out during delivery.'
                )

                self.mission_running = False

                return result

            delivery_elapsed = time.time() - delivery_start

            # Delivery completed
            if delivery_elapsed >= delivery_time:
                break

            # -------------------------------------------------
            # MOVE FORWARD
            # -------------------------------------------------

            twist = Twist()
            twist.linear.x = speed
            twist.angular.z = 0.0

            self.cmd_vel_publisher.publish(twist)

            # -------------------------------------------------
            # FEEDBACK
            # -------------------------------------------------

            feedback = DeliveryMission.Feedback()

            feedback.remaining_time = max(
                0.0,
                remaining_time
            )

            feedback.pickup_progress = 100.0

            goal_handle.publish_feedback(feedback)

            time.sleep(0.1)

        # =====================================================
        # MISSION COMPLETE
        # =====================================================

        self.stop_robot()

        goal_handle.succeed()

        result = DeliveryMission.Result()
        result.success = True
        result.message = (
            'Delivery mission completed successfully.'
        )

        self.mission_running = False

        self.get_logger().info(
            'Delivery mission completed successfully.'
        )

        return result

    # ---------------------------------------------------------
    # STOP ROBOT
    # ---------------------------------------------------------

    def stop_robot(self):

        twist = Twist()

        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0

        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0

        self.cmd_vel_publisher.publish(twist)


# =============================================================
# MAIN
# =============================================================

def main(args=None):

    rclpy.init(args=args)

    node = DeliveryMissionServer()

    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    finally:
        node.stop_robot()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()



    # Build in turtlebot_operation_norasheikhly workspace:
    # colcon build --packages-select delivery_mission_controller 

    #source
    # source install/setup.bash

    #Run terminal 1:
    # source install/setup.bash
    # ros2 run delivery_mission_controller delivery_mission_server
    # result: Delivery Mission server is ready.

    Terminal2:
    # source install/setup.bash
    #ros2 topic echo /cmd_vel
    #nothing appears

    Terminal3:
    #source install/setup.bash
    # ros2 action send_goal /delivery_mission delivery_mission_interfaces/action/DeliveryMission "{speed: 0.2, pickup_duration: 5.0, delivery_time: 5.0, timeout: 20.0}" --feedback
    #Results will show, after giving the command the server will start to reply with feedback as seen in the video: action
 
