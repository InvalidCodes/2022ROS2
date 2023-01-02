#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("minimal_publisher"), count_(0)  //name the node & initialize count_
    {
      publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10); //topic name, queue size
      timer_ = this->create_wall_timer(  //initialize timer_
      1000ms, std::bind(&MinimalPublisher::timer_callback, this));  //execute timer_callback once a second
    }

  private:
    //set message data & publish messages
    void timer_callback()  
    {
      auto message = std_msgs::msg::String();
      message.data = "Hello, world! " + std::to_string(count_++);
      RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());  //print published message to the console
      publisher_->publish(message);
    }
    //declare timer & publisher & counter fields
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);  //initialize ros2
  rclcpp::spin(std::make_shared<MinimalPublisher>());  //start processing data from the node
  rclcpp::shutdown();
  return 0;
}