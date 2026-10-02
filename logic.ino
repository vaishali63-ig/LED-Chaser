
int mode = 1;
int speed = 500;

void setup()
{
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(A0,OUTPUT);
 
}

void loop()
{
     switch (mode)
    {
      case 1:
        leftToRight(speed);
        break;

      case 2:
        rightToLeft(speed);
        break;

      case 3:
        middleToBothSide(speed);
        break;

      case 4:
        cornerToMiddle(speed);
        break;
    
      case 5:
        outSideToInside(speed);
        break;

      case 6:
        twoLedRun(speed);
        break;

      case 7:
        alternate(speed);
        break;

      case 8:
        cornerToMiddle(speed);
        break;
     case 9:
        centerFlash(speed);
        break;
    
     case 10:
        outSidePairToInside(speed);
        break;
}
}


void rightToLeft(int speed){

  digitalWrite(7,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(speed);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(speed);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  delay(speed);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(speed);
  digitalWrite(13,LOW);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(A0,LOW);
}

void leftToRight(int speed){

  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(A0,LOW);
  digitalWrite(13,HIGH);
  delay(speed);

  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(speed);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(speed);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(speed);

  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
}

void middleToBothSide(int speed){

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);

  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);

  digitalWrite(9,LOW);
  digitalWrite(12,LOW);

  digitalWrite(8,HIGH);
  digitalWrite(13,HIGH);
  delay(speed);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);

  digitalWrite(7,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(A0,LOW);

}

void cornerToMiddle(int speed){

  digitalWrite(7,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(A0,LOW);

  digitalWrite(8,HIGH);
  digitalWrite(13,HIGH);
  delay(speed);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);

  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);

  digitalWrite(9,LOW);
  digitalWrite(12,LOW);

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
}

void outSideToInside(int speed){

  digitalWrite(7,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(A0,LOW);

  digitalWrite(8,HIGH);
  digitalWrite(13,HIGH);
  delay(speed);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);

  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);

  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);

  digitalWrite(8,HIGH);
  digitalWrite(13,HIGH);
  delay(speed);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);

  digitalWrite(7,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(A0,LOW);
}

void twoLedRun(int speed){
    
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);

  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(speed);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);

  digitalWrite(13,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(13,LOW);
  digitalWrite(A0,LOW);

  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);

  digitalWrite(11,LOW);
  digitalWrite(12,LOW);

  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  delay(speed);

  digitalWrite(9,LOW);
  digitalWrite(10,LOW);

}

void alternate(int speed){

  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(13,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(13,LOW);

  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(A0,LOW);
}

void outSidePairToInside(int speed){
  digitalWrite(7,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);
  digitalWrite(7,LOW);
  digitalWrite(A0,LOW);

  digitalWrite(8,HIGH);
  digitalWrite(13,HIGH);
  delay(speed);
  digitalWrite(8,LOW);
  digitalWrite(13,LOW);

  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);

}

void onOff(int speed){
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(A0,HIGH);
  delay(speed);

  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(A0,LOW);
  delay(speed);
}

void centerFlash(int speed){

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(speed);

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(speed);

  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  delay(speed);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);
}