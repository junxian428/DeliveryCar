int pwm1_motor_right=6;                //pwm mottor right connect to AN2 at MDS10
int pwm1_motor_left=5;                 //pwm mottor left connect to AN1 at MDS10
int dir1_motor_right=24;                //dir1ection mottor right connect to DIG2 at MDS10 
int dir1_motor_left=22;                 //dir11ection mottor left connect to DIG1 at MDS10
int pwm2_motor_right=4;                //pwm mottor right connect to AN2 at MDS10
int pwm2_motor_left=3;                 //pwm mottor left connect to AN1 at MDS10
int dir2_motor_right=28;                //dir1ection mottor right connect to DIG2 at MDS10 
int dir2_motor_left=26;                 //dir11ection mottor left connect to DIG1 at MDS10


void setup() {
  Serial.begin(9600);
  pinMode(24,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(28,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(26,OUTPUT);
  delay(1000);      // to make the input data in low.
  while (!Serial){
    ;
  }
// put your  setup code here, to run once:

}

void loop() {

  Serial.print("Forward");
  analogWrite(pwm1_motor_right,50);
  analogWrite(pwm1_motor_left,50);
  analogWrite(pwm2_motor_right,50);
  analogWrite(pwm2_motor_left,50);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,HIGH);
  delay(3000);
  
  Serial.print("Right Slide");
  analogWrite(pwm1_motor_right,50);
  analogWrite(pwm1_motor_left,50);
  analogWrite(pwm2_motor_right,50);
  analogWrite(pwm2_motor_left,50);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,LOW);
  digitalWrite(dir2_motor_right,LOW);
  digitalWrite(dir2_motor_left,HIGH);
  delay(3000);
  
  Serial.print("Left Slide");
  analogWrite(pwm1_motor_right,50);
  analogWrite(pwm1_motor_left,50);
  analogWrite(pwm2_motor_right,50);
  analogWrite(pwm2_motor_left,50);
  digitalWrite(dir1_motor_right,LOW);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,LOW);
  delay(3000);

  Serial.print("Reverse");
  analogWrite(pwm1_motor_right,50);
  analogWrite(pwm1_motor_left,50);
  analogWrite(pwm2_motor_right,50);
  analogWrite(pwm2_motor_left,50);
  digitalWrite(dir1_motor_right,LOW);
  digitalWrite(dir1_motor_left,LOW);
  digitalWrite(dir2_motor_right,LOW);
  digitalWrite(dir2_motor_left,LOW);
  delay(3000);

  Serial.print("Rotate Clockwise");
  analogWrite(pwm1_motor_right,50);
  analogWrite(pwm1_motor_left,50);
  analogWrite(pwm2_motor_right,50);
  analogWrite(pwm2_motor_left,50);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,LOW);
  digitalWrite(dir2_motor_left,LOW);
  delay(3000);

 


  Serial.print("Rotate Counter Clockwise");
  analogWrite(pwm1_motor_right,50);
  analogWrite(pwm1_motor_left,50);
  analogWrite(pwm2_motor_right,50);
  analogWrite(pwm2_motor_left,50);
  digitalWrite(dir1_motor_right,LOW);
  digitalWrite(dir1_motor_left,LOW);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,HIGH);
  delay(3000);

  Serial.print("Turn Right");
  analogWrite(pwm1_motor_right,50);
  analogWrite(pwm1_motor_left,0);
  analogWrite(pwm2_motor_right,0);
  analogWrite(pwm2_motor_left,50);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,HIGH);
  delay(3000);

  Serial.print("Turn Left");
  analogWrite(pwm1_motor_right,0);
  analogWrite(pwm1_motor_left,50);
  analogWrite(pwm2_motor_right,50);
  analogWrite(pwm2_motor_left,0);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,HIGH);
  delay(3000);
  
  Serial.print("Stop");
  analogWrite(pwm1_motor_right,0);
  analogWrite(pwm1_motor_left,0);
  analogWrite(pwm2_motor_right,0);
  analogWrite(pwm2_motor_left,0);
  digitalWrite(dir1_motor_right,HIGH);
  digitalWrite(dir1_motor_left,HIGH);
  digitalWrite(dir2_motor_right,HIGH);
  digitalWrite(dir2_motor_left,HIGH);
  delay(5000);

  
  
}
