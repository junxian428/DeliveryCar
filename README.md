# DeliveryCar
Delivery Car Docs


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

