#include <Servo.h>
#include <math.h>
Servo servoY,servoX,servoXInvert;  // create servo object to control a servo 
 
void setup() 
{ 
  servoX.attach(5);
  servoXInvert.attach(3);
  servoY.attach(6);
  
} 
 
void moveUp();
void moveDown();
void moveRight();
void moveLeft();
void oscillate();


float getAngleX(int col){
  float y;
  y = 20*pow(col,3) - 145*pow(col,2) +365*col - 240;
  return y;
}
float getAngleY(int row){
  float y;
 // y = 2.5*pow(row,3) - 20*pow(row,2) + 17.5*row +180;
  y = -30.34* row +211.602;
  return y;
}

/*void goTo(int x,int y){
  servoX.write(x);
  servoY.write(y);
  delay(15);
}*/

void goTo(int col,int row){
  servoX.write(getAngleX(col));  
  servoY.write((int)getAngleY(row));
  
  delay(15);
}
void loop() 
{ 

    goTo(1,4);

//  moveUp();
//  moveRight();
  

} 




void oscillate(Servo servo,int minA, int maxA){
  int a;
//  servo.write(90);
 for(a=minA;a<maxA;a++) {
    servo.write(a);
    delay(15);  
  }
 for(a=maxA;a>minA;a--){
   servo.write(a);
    delay(15);  
 }
 
  
}

//int matX,matY;
void moveUp(){
 
 //oscillate(servoY,90,180);
}
void moveRight(){

 //oscillate(servoX,0,180);

}
void moveDown(){

}
void moveLeft(){

}
