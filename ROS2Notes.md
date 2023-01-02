# Quick Start

### Ubuntu和ROS版本对应关系

| Ubuntu | ROS1    | ROS2    |
| ------ | ------- | ------- |
| 16.04  | Kinetic | Ardent  |
| 18.04  | Melodic | Dashing |
| 20.04  | Noetic  | Foxy    |



### [试试小乌龟](https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Introducing-Turtlesim/Introducing-Turtlesim.html)

```shell
ros2 run turtlesim turtlesim_node #启动
ros2 run turtlesim turtle_teleop_key #控制
rqt #rqt
```

plugins-services-services caller

```shell
ros2 run turtlesim turtle_teleop_key --ros-args --remap turtle1/cmd_vel:=turtle2/cmd_vel #移动turtle2
```



### NODE

```shell
ros2 run <package_name> <executable_name> #launch executable
ros2 node list
ros2 run turtlesim turtlesim_node --ros-args --remap __node:=my_turtle #remap
ros2 node info <node_name> #information
```



### TOPIC

<!--one of the main ways in which data is moved between nodes and therefore between different parts of the system.-->

publisher-subscriber model

point-to-pint, one-to-many, many-to-one, or many-to-many.

![](https://docs.ros.org/en/foxy/_images/Topic-MultiplePublisherandMultipleSubscriber.gif)

```shell
rqt_graph #nodes and topic
ros2 topic list
ros2 topic list -t
ros2 topic echo <topic_name>
ros2 topic info <topic_name>
ros2 topic pub <topic_name> <msg_type> '<args>'
```

example:

```shell
ros2 topic pub --once /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" #once:publish one message then exit
ros2 topic pub --rate 1 /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}" #rate 1:publish the command in a steady stream at 1Hz
ros2 topic echo /turtle1/pose #check history
ros2 topic hz /turtle1/pose #view the rate at which data is published using

```



### Service

call-and-response model

![](https://docs.ros.org/en/foxy/_images/Service-MultipleServiceClient.gif)

```shell
ros2 service type <service_name>
ros2 service find <type_name>
ros2 interface show <type_name>.srv #接口
ros2 service call <service_name> <service_type> <arguments>
```

example:

```shell
ros2 service type /clear
ros2 service find std_srvs/srv/Empty #/clear /reset
ros2 interface show std_srvs/srv/Empty.srv #___
ros2 service call /clear std_srvs/srv/Empty
ros2 service call /spawn turtlesim/srv/Spawn "{x: 2, y: 2, theta: 0.2, name: ''}"
```



### Parameter

<!--~<!--configuration value of a node-->~-->

```shell
ros2 param get <node_name> <parameter_name>
ros2 param set <node_name> <parameter_name> <value>
ros2 param dump <node_name>
ros2 param load <node_name> <parameter_file>
ros2 run <package_name> <executable_name> --ros-args --params-file <file_name>
```

example:

```shell
ros2 param get /turtlesim background_g
ros2 param set /turtlesim background_r 150
ros2 param dump /turtlesim
ros2 param load /turtlesim ./turtlesim.yaml
ros2 run turtlesim turtlesim_node --ros-args --params-file ./turtlesim.yaml
```



### Action

client-server model

![](/home/ge/Pictures/Action-SingleActionClient.gif)

```shell
ros2 action send_goal <action_name> <action_type> <values>
```

examples:

```shell
ros2 action send_goal /turtle1/rotate_absolute turtlesim/action/RotateAbsolute "{theta: 1.57}"
ros2 action send_goal /turtle1/rotate_absolute turtlesim/action/RotateAbsolute "{theta: -1.57}" --feedback
```



### 命令行输出HELLOWORLD

#### 创建工作空间并初始化

```shell
mkdir -p 空间名/src && cd 空间名
colcon build
cd src
ros2 pkg create --build-type ament_cmake <包名> #保存自定义接口文件
#ros2 pkg create --build-type ament_cmake base_interfaces_demo
```

#### 生成源文件

```shell
cd src
ros2 pkg create <包名> --build-type ament_cpp --dependencies rclcpp --node-name <节点名>
```

example:

```shell
ros2 pkg create pkg01_helloworld_cpp --build-type ament_cmake --dependencies rclcpp --node-name helloworld #rclcpp: ros2client cpp
```

#### 编译

```shel
cd ..
colcon build
```

#### 执行

```shell
. install/setup.zsh #every terminal nees one
ros2 run <包名> <程序名> #ros2 run pkg01_helloworld_cpp helloworld
```

#### 编辑源文件

```c++
#include "rclcpp/rclcpp.hpp"
int main(int argc, char** argv){
	rclcpp::init(argc,argv);                         // initialize ros2
    auto node = rclcpp::Node::make_shared("helloworld_node_cpp"); // create a node pointer
	RCLCPP_INFO(node->get_logger(),"hello world!");   // output
    rclcpp::shutdown();                               // release resources
	return 0;
}
```

```shell
colcon build
ros2 run <包名> <程序名> #ros2 run pkg01_helloworld_cpp helloworld
```

#### 运行优化

```shell
echo "source /{工作空间路径}/install/setup.zsh" >> ~/.zshrc
#echo "source /home/ros2/ws00_helloworld/install/setup.zsh" >> ~/.zshrc
```





## IDE

#### vscode配置路径

```shell
/opt/ros/foxy/include/** #**代表所有文件
```

#### 插件

#### 打开终端快捷方式 ctrl + ~

#### 生成源文件

```shell
cd src
ros2 pkg create <包名> --build-type ament_cpp --dependencies rclcpp --node-name <节点名>
```

#### 运行

```shell
cd ..
colcon build --packages-select <包名> #colcon build --packages-select pkg03_hellovscode_cpp pkg01_helloworld_cpp
. install/setup.zsh #every terminal nees one
ros2 run <包名> <程序名> #ros2 run pkg03_hellovscode_cpp hellovscode
```

#### 在包中新建cpp

**编辑CMakeLists.txt**

- add_executable()

- ament_target_dependencies{}
- install()

**运行**

```shell
colcon build --packages-select <包名>
ros2 run <包名> <程序名> #ros2 run pkg03_hellovscode_cpp hellovscode2
```



## 通信模型

**话题通信**：单向- .msg文件 

*e.g. 传感器数据* sensor_msgs geometry_msgs

服务通信：双向- .srv （一个---分割）

动作通信：持续- .action （两个---分割）

参数服务：客户端可操作服务端- 无需定义接口文件，客户端和服务端操作接口对象



### demo

```shell
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws
git clone https://github.com/ros2/examples src/examples -b foxy
rosdep install -i --from-path src --rosdistro foxy -y
colcon build --symlink-install
. install/setup.zsh
ros2 run examples_rclcpp_minimal_subscriber subscriber_member_function
ros2 run examples_rclcpp_minimal_publisher publisher_member_function
```



### 话题通信

```shell
cd src
ros2 pkg create cpp01_topic --build-type ament_cmake --dependencies rclcpp std_msgs base_interfaces_demo --node-name demo01_talker_str
```

