
#include <ros.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Float32.h>

int pwm1_motor_right=6;                //pwm mottor right connect to AN2 at MDS10
int pwm1_motor_left=5;                 //pwm mottor left connect to AN1 at MDS10
int dir1_motor_right=24;                //dir1ection mottor right connect to DIG2 at MDS10 
int dir1_motor_left=22;                 //dir11ection mottor left connect to DIG1 at MDS10
int pwm2_motor_right=4;                //pwm mottor right connect to AN2 at MDS10
int pwm2_motor_left=3;                 //pwm mottor left connect to AN1 at MDS10
int dir2_motor_right=28;                //dir1ection mottor right connect to DIG2 at MDS10 
int dir2_motor_left=26;      

// Define the callback functions for each subscriber
void int_callback1(const std_msgs::Int32& msg) {
  // Do something with the received message from int_topic_1
  //digitalWrite(13, HIGH-digitalRead(13));   // blink the led
  analogWrite(pwm1_motor_right,100);
  analogWrite(pwm1_motor_left,100);
  analogWrite(pwm2_motor_right,100);
  analogWrite(pwm2_motor_left,100);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,HIGH);
  delay(3000);
}

void int_callback2(const std_msgs::Int32& msg) {
  // Do something with the received message from int_topic_2
    analogWrite(pwm1_motor_right,0);
  analogWrite(pwm1_motor_left,0);
  analogWrite(pwm2_motor_right,0);
  analogWrite(pwm2_motor_left,0);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,HIGH);
  delay(3000);
}

void float_callback1(const std_msgs::Float32& msg) {
  // Do something with the received message from float_topic_1
}

void float_callback2(const std_msgs::Float32& msg) {
  // Do something with the received message from float_topic_2
}

void float_callback3(const std_msgs::Float32& msg) {
  // Do something with the received message from float_topic_3
}


// Define the ROS node handle and the subscriber objects
ros::NodeHandle nh;
ros::Subscriber<std_msgs::Int32> int_sub1("int_topic_1", int_callback1);
ros::Subscriber<std_msgs::Int32> int_sub2("int_topic_2", int_callback2);
ros::Subscriber<std_msgs::Float32> float_sub1("float_topic_1", float_callback1);
ros::Subscriber<std_msgs::Float32> float_sub2("float_topic_2", float_callback2);
ros::Subscriber<std_msgs::Float32> float_sub3("float_topic_3", float_callback3);


void setup() {
  // Initialize the ROS node
      Serial.begin(57600);
  pinMode(24,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(26,OUTPUT);
  nh.initNode();

  // Subscribe to each topic
  nh.subscribe(int_sub1);
  nh.subscribe(int_sub2);
  nh.subscribe(float_sub1);
  nh.subscribe(float_sub2);
  nh.subscribe(float_sub3);

}

void loop() {
  // Handle incoming ROS messages
  nh.spinOnce();

  // Do other stuff here...
}
