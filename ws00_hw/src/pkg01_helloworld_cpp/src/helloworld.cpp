#include "rclcpp/rclcpp.hpp"
int main(int argc, char** argv){
        rclcpp::init(argc,argv);                                  // initialize ros2
    auto node = rclcpp::Node::make_shared("helloworld_node"); // create a node
        RCLCPP_INFO(node->get_logger(),"hello world!");           // output
    rclcpp::shutdown();                                       // release resources
        return 0;
}
