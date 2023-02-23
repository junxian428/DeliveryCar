# DeliveryCar
Delivery Car Docs

Circuit Diagram

https://drive.google.com/file/d/1IiXj4HkdnTf0yfSCT3aUE1DxfW6fQZoG/view?usp=sharing

Problem:

Undervoltage for motor shield SmartDriveDuo-10 Cython

Error Code (3 blinking LED)

Solved and Demo Video:

https://youtu.be/sfYTQ9pSfkc

Command:

Run the server: roscore

Run the port: rosrun rosserial_python serial_node.py /dev/ttyACM0

Turn Off: rostopic pub stop_motor std_msgs/Empty --once
 
Turn On: rostopic pub toggle_led std_msgs/Empty --once


Demo video:

Arduino + JetSon Nano + 24DC Motor + SmartDriverDuo-10 + Python FastAPI + Go Desktop + Flutter + ROS

https://youtu.be/fhBuPoX1ITI



Research Part:

1- ROS in Ubuntu 

2- LiDAR

3- Thermal Camera

4- Movement for Motor 

5-HMI Screen for Robot

6- Serial Port Command From Jetson Nano to Arduino Mega

7- Arduino Mega control

8- AC to  DC voltage 

24V for Planetry Motor

5V for JetSon Nano Board

Arduino Mega powered by USB

9- Google LIDAR map for Robot Car

10- Delphine Website API integrated with platform

11- Ladder programming OMRON PLC

12- Ubuntu command 

Ubuntu bionic 18.04.6

Some version ROS is not compatible

https://wiki.ros.org/Distributions
_____________________________________________________________________________________________________________________________________________________



Coding Part:

https://www.norwegiancreations.com/2017/12/arduino-tutorial-serial-inputs/#:~:text=Using%20serial%20inputs%20is%20not,on%20your%20keyboard%20to%20send.

String command;
 
void setup() {

Serial.begin(9600); 

}
 
void loop() {

if(Serial.available()){

command = Serial.readStringUntil('\n');
         
        if(command.equals("init")){

          initialize();
        
        }
        
        else if(command.equals("send")){
        
          send_message();
        
        }
         
         else if(command.equals("data")){
         
         get_data();
        
        }
        
        else if(command.equals("reboot")){
        
          reboot();
        
        }
        
        else{
        
        Serial.println("Invalid command");
        
        }
    
    }

}



Rplidar a1m8

