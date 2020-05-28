//Button Plus
int buttonStateP=0;
//Button Minus
int buttonStateM=0;
int number=0;
int lastButtonStateP=0;
int lastButtonStateM=0;
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pins[]={pinA,pinB,pinC,pinD,pinE,pinF,pinG};
//Numbers
int num0[]={0,0,0,0,0,0,1};
int num1[]={1,0,0,1,1,1,1};
int num2[]={0,0,1,0,0,1,0};
int num3[]={0,0,0,0,1,1,0};
int num4[]={1,0,0,1,1,0,0};
int num5[]={0,1,0,0,1,0,0};
int num6[]={0,1,0,0,0,0,0};
int num7[]={0,0,0,1,1,1,1};
int num8[]={0,0,0,0,0,0,0};
int num9[]={0,0,0,0,1,0,0};


void setup()
{
  Serial.begin(9600);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(1,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  //Reads each button and checks if they are pressed and released
 buttonStateP = digitalRead(1);
 buttonStateM = digitalRead(0); 
  if(lastButtonStateP!=buttonStateP){
    if (buttonStateP == HIGH) {
      number++;
      }
 }
 lastButtonStateP = buttonStateP;
 
 if(lastButtonStateM!=buttonStateM){
 if (buttonStateM == HIGH) {
   number--;
  }
 }
 lastButtonStateM = buttonStateM;
 //Passes the numbers to the screens
   numA(number);
   delay(3);
   numB(number);
   delay(3);
}
//Calculates the ones position
void numA(int te){
int toPrint=te%10;
	digitalWrite(9,HIGH);
	digitalWrite(10,LOW);
  switch(toPrint){
  case 0:
    for(int i=0;i<7;i++){
      digitalWrite(pins[i],num0[i]);
     }
    break;
  case 1:
        for(int i=0;i<7;i++){
      digitalWrite(pins[i],num1[i]);
     }
    break;
  case 2:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num2[i]);
     }
    break;
  case 3:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num3[i]);
     }
    break;
  case 4:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num4[i]);
     }
    break;
  case 5:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num5[i]);
     }
    break;
  case 6:
  for(int i=0;i<7;i++){
      digitalWrite(pins[i],num6[i]);
     }
    break;
  case 7:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num7[i]);
     }
    break;
  case 8:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num8[i]);
     }
    break;
  case 9:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num9[i]);
     }
    break;
  }
}
//Calculates the tenths position
void numB(int ts){
int toPrintB=ts/10;
	digitalWrite(9,LOW);
	digitalWrite(10,HIGH);
  switch(toPrintB){
  case 0:
    for(int i=0;i<7;i++){
      digitalWrite(pins[i],num0[i]);
     }
    break;
  case 1:
        for(int i=0;i<7;i++){
      digitalWrite(pins[i],num1[i]);
     }
    break;
  case 2:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num2[i]);
     }
    break;
  case 3:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num3[i]);
     }
    break;
  case 4:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num4[i]);
     }
    break;
  case 5:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num5[i]);
     }
    break;
  case 6:
  for(int i=0;i<7;i++){
      digitalWrite(pins[i],num6[i]);
     }
    break;
  case 7:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num7[i]);
     }
    break;
  case 8:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num8[i]);
     }
    break;
  case 9:
      for(int i=0;i<7;i++){
      digitalWrite(pins[i],num9[i]);
     }
    break;
  }
}