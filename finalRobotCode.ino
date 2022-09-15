  
  #include <Servo.h>
  
  Servo rightArm;// create servo object to control a servo
  Servo leftArm;// create servo object to control a servo
  Servo rotate;
  //9 right 10 left
  int rightPin = 9;
  int leftPin = 10;
  int rotatePin = 5;
  
  
  void setup() {
    rightArm.attach(rightPin); 
    leftArm.attach(leftPin);
    rotate.attach(rotatePin);
    rotate.write(90);
    // attaches the servo on pin 9 to the servo object
  }
  
  void loop() {
    rightArm.write(20);
    leftArm.write(120);
  //  rotate.write(70);
    for(int i = 0; i < 10; i++){
        rotate.write(110-(i*4));
        delay(100);
      }   
    delay(1000);
    rightArm.write(70);
    leftArm.write(80);
    //rotate.write(110);
    for(int i = 0; i < 10; i++){
        rotate.write(70+(i*4));
        delay(100);
      }   
    delay(1000);
              
  }
  
  //Right Arm: Up is 20, down is 70
  //Left Arm: Up Is 120, Down is 100
  //Body has not worked yet
