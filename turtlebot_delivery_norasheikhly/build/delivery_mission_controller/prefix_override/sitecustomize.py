import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/workspaces/turtlebot_delivery_norasheikhly/install/delivery_mission_controller'
