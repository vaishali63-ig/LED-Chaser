
void setup()
{pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(6,OUTPUT);

}

void loop()
{digitalWrite(7,HIGH);
 delay(300);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 delay(300);
 digitalWrite(8,LOW);
 digitalWrite(12,HIGH);
 delay(300);
 digitalWrite(12,LOW);
 
}
