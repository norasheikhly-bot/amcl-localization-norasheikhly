# Step1:
        # Configure the URDF visualizer to find th erobot package and display the robot
        # open VS to install JSON workspace and add
        {
        "urdf-visualizer.packages": {
            "robot_description": "/root/workspaces/robot_description_norasheikhly/src/robot_description"
        }
        }
# Step2:
        # Create workspace robot_description_norasheikhly and src by using mkdir -p
        # Under src create the robot_description pkg by pkg create of cmake type
# Step3: 
        # create the urdf folder under the robot_description
        # under urdf create the file robot.urdf.xacro by touch command
# Step4: Xacro Code
        # Fill the robot.urdf.xacro with the following command:

        #XML declaration (Elements: version, name, tags)
        
<?xml version="1.0"?>
<robot name="two_wheel_robot" xmlns:xacro="http://www.ros.org/wiki/xacro">        

        # Add Robot properties: base dimensions,wheel dimensions and radius and offset: wheel displacement 

<xacro:property name="base_length" value="0.6"/>
<xacro:property name="base_width" value="0.4"/>
<xacro:property name="base_height" value="0.2"/>
<xacro:property name="base_mass" value="5.0"/>

<xacro:property name="wheel_radius" value="0.1"/>
<xacro:property name="wheel_width" value="0.05"/>
<xacro:property name="wheel_mass" value="0.5"/>

<xacro:property name="wheel_x_offset" value="0.2"/>
<xacro:property name="wheel_y_offset" value="0.225"/>
<xacro:property name="wheel_z_offset" value="-0.05"/>

        # added wheel size to be able to change the radius
<xacro:property name="caster_wheel_radius" value="0.09"/>
<xacro:property name="caster_wheel_width" value="0.04"/>


        #Add base_link: create the robot body by specifying the visual collision and inertia 
        
<link name="base_link">
  <visual>
    <geometry>
      <box size="${base_length} ${base_width} ${base_height}"/>
    </geometry>

    <material name="chassis_color">
      <color rgba="0.1 0.5 0.8 1.0"/>
    </material>
  </visual>

  <collision>
    <geometry>
      <box size="${base_length} ${base_width} ${base_height}"/>
    </geometry>
  </collision>

  <inertial>
    <mass value="${base_mass}"/>

    <origin xyz="0 0 0" rpy="0 0 0"/>

    <inertia
      ixx="${(1/12) * base_mass * (base_width*base_width + base_height*base_height)}"
      ixy="0.0"
      ixz="0.0"
      iyy="${(1/12) * base_mass * (base_length*base_length + base_height*base_height)}"
      iyz="0.0"
      izz="${(1/12) * base_mass * (base_length*base_length + base_width*base_width)}"/>
  </inertial>
</link>
        
        # Add base_footprint to link the robot to ground 

<link name="base_footprint"/>

        # Link the base_footprint to the base_link with a distance of 15cm between them
        
<joint name="base_footprint_joint" type="fixed">
  <parent link="base_footprint"/>
  <child link="base_link"/>
  <origin xyz="0 0 0.15" rpy="0 0 0"/>
</joint>

        
        # Add joints specify (parent, child, origin, axis, limit) 

        #create a function Macro file and define the joint instead of repeating same code for 3 wheels used

<xacro:macro name="wheel" params="prefix x_reflect y_reflect">

</xacro:macro>
         
         #Add wheel joint inside macro

<joint name="${prefix}_wheel_joint" type="continuous">
  <parent link="base_link"/>
  <child link="${prefix}_wheel_link"/>

  <origin
    xyz="${x_reflect * wheel_x_offset} ${y_reflect * wheel_y_offset} ${wheel_z_offset}"
    rpy="0 0 0"/>

  <axis xyz="0 1 0"/>
</joint>


        #add wheel link (visual collision inertia) under the joint:

        <link name="${prefix}_wheel_link">
  <visual>
    <origin xyz="0 0 0" rpy="${pi/2} 0 0"/>

    <geometry>
      <cylinder radius="${wheel_radius}" length="${wheel_width}"/>
    </geometry>

    <material name="wheel_color">
      <color rgba="0.1 0.1 0.1 1.0"/>
    </material>
  </visual>

  <collision>
    <origin xyz="0 0 0" rpy="${pi/2} 0 0"/>

    <geometry>
      <cylinder radius="${wheel_radius}" length="${wheel_width}"/>
    </geometry>
  </collision>

  <inertial>
    <mass value="${wheel_mass}"/>

    <origin xyz="0 0 0" rpy="${pi/2} 0 0"/>

    <inertia
      ixx="${(1/12) * wheel_mass * (3*wheel_radius*wheel_radius + wheel_width*wheel_width)}"
      ixy="0.0"
      ixz="0.0"
      iyy="${(1/12) * wheel_mass * (3*wheel_radius*wheel_radius + wheel_width*wheel_width)}"
      iyz="0.0"
      izz="${(1/2) * wheel_mass * (wheel_radius*wheel_radius)}"/>
  </inertial>
</link>

        #create the two wheels in front and caster wheel in the back middle distance:

<xacro:wheel prefix="front_left"  x_reflect="1" y_reflect="1" wheel_radius="${wheel_radius}" wheel_width="${wheel_width}"/>
  <xacro:wheel prefix="front_right" x_reflect="1" y_reflect="-1" wheel_radius="${wheel_radius}" wheel_width="${wheel_width}"/>
  <xacro:wheel prefix="caster_wheel"   x_reflect="-1" y_reflect="0" wheel_radius="${caster_wheel_radius}" wheel_width="${caster_wheel_width}"/> #back middle

</robot>

# Step5: Mesh files
      # create mesh file under robot_description called meshes
      # drag and drop LiDAR and camera .stl files
      # can see the LiDAR and Camera by mesh viewer


      #Modify CMakeLists.txt so all mesh files are copied into the package and can be visualized
install(
  DIRECTORY urdf meshes
  DESTINATION share/${PROJECT_NAME}
)

       #Modify the .xacro file by adding the mesh path 
       <xacro:arg name="mesh_path" default="package://robot_description/meshes/"/>

       #add the lidar link and camera in the .xacro file also
<link name="lidar_link">
  <visual>
    <origin xyz="0 0 0" rpy="0 0 0"/>
    <geometry>
      <mesh filename="$(arg mesh_path)lidar.STL"/>
    </geometry>
    <material name="lidar_gray">
    <color rgba="0.6 0.6 0.6 1.0"/>
    </material>
  </visual>
  <collision>
    <origin xyz="0 0 0" rpy="0 0 0"/>
    <geometry>
      <cylinder radius="0.06" length="0.04"/>
    </geometry>
  </collision>
  <inertial>
    <mass value="0.2"/>
    <origin xyz="0 0 0" rpy="0 0 0"/>
    <inertia ixx="0.0001" ixy="0.0" ixz="0.0"
             iyy="0.0001" iyz="0.0"
             izz="0.0001"/>
  </inertial>
</link>

<joint name="lidar_joint" type="fixed">
  <parent link="base_link"/>
  <child link="lidar_link"/>
  <origin xyz="0.2 0 0.13" rpy="0 0 0"/>
</joint>

<link name="camera_link">
  <visual>
    <origin xyz="0 0 0" rpy="0 0 0"/>
    <geometry>
      <mesh filename="$(arg mesh_path)zed.stl"/>
    </geometry>
    <material name="camera_black">
      <color rgba="0.5 0.5 0.5 1.0"/>
    </material>
  </visual>
  <collision>
    <origin xyz="0 0 0" rpy="0 0 0"/>
    <geometry>
      <box size="0.08 0.03 0.03"/>
    </geometry>
  </collision>
  <inertial>
    <mass value="0.1"/>
    <origin xyz="0 0 0" rpy="0 0 0"/>
    <inertia ixx="0.00005" ixy="0.0" ixz="0.0"
             iyy="0.00005" iyz="0.0"
             izz="0.00005"/>
  </inertial>
</link>

<joint name="camera_joint" type="fixed">
  <parent link="base_link"/>
  <child link="camera_link"/>
  <origin xyz="0.3 0 0.08" rpy="0 0 0"/>
</joint>

