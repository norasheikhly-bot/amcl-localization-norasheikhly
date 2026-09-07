AMCL Localization

    Overview

    This project demonstrates robot localization using the Adaptive Monte Carlo Localization (AMCL) package in ROS 2.

    A previously generated SLAM map is loaded using the map_server, and AMCL estimates the robot's pose using LaserScan and Odometry data. Localization is visualized in RViz using the particle cloud.


    Features

        - Load previously generated SLAM map 
        - Run map_server
        - Launch AMCL localization
        - Visualize particle cloud
        - Set initial pose in RViz
        - Observe localization convergence
        - Drive the robot while maintaining localization
        - TF transformations between map, odom and base_link

    Running the Project

        Create the ws folder: amcl-localization-norasheikhly/src/robot_localization
                congif file
                    amcl.yaml
                launch file
                    amcl.launch.yaml
                map
                    turtlebot3_world_map.yaml
                    turtlebot3_world_map.pgm
            CMakeLists
            package.xml
            

        Source ROS

            Build: colcon build
            source install/setup.bash

            Launch the gazebo simulator: turtlebot3_world
            
            Launch AMCL
            ros2 launch robot_localization amcl.launch.py
            the map_server and lifecycle_manager will be launched also
            
            Open RViz:
            source install/setup.bash
            rviz2

            add, map/TF/RobotModel/laserscan/particlecloud
            the previously saved map will be loaded, the cloud particles will be in red around the robot and obvious after setting the initial pose
![alt text](<amcl-cloud particle.png>)

            Set an incorrect initial pose.
![alt text](<amcl-wrong pose.png>)
            the particle cloud spread, and the mismatch between the LiDAR scan and saved map is observed

            Set a correct initial pose.
![alt text](<amcl- correct pose.png>)
            the particles are around the robot and their is a match between the LiDAR scan and the saved map

            Give the teleop control and drive the robot around the map:
            Observe particles converging to the robot's true position. more movement of the robot is better. also, the localization remain stable
            
        Results:
            The localization successfully converges from an incorrect initial pose to the correct pose.
            The particle cloud becomes concentrated around the robot after convergence and remains stable while the robot navigates.
            Evidence
<video controls src="amcl-robot localization.mp4" title="Title"></video>
            Robot localization demonstration while moving.
            TF Frames
            The following TF frames were verified:
            map
            odom
            base_link
            laser
![alt text](<amcl-TF tree.png>)


        Conclusion
            The AMCL localization system successfully estimated the robot pose using the saved map, odometry, and laser scan data. The robot remained accurately localized while navigating the environment.


