
// Kyle Cullen was here.
// Jon Hallowell 
// Mike Nowak

void setup() {
  // set digital pin 13 as output
  pinMode(9,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  if(digitalRead(9)==HIGH)  //checks for button press
  {
    // put your main code here, to run repeatedly:
    digitalWrite(10,HIGH);  //sets the digital pin 10 high
    delay(1000);            //waits 1s
    digitalWrite(10,LOW);   //sets digital pin 10 low
    digitalWrite(11,HIGH);  //sets the digital pin 11 high
    delay(1000);            //waits 1s
    digitalWrite(11,LOW);   //sets digital pin 11 low
    digitalWrite(12,HIGH);  //sets the digital pin 12 on
    delay(1000);            //waits 1s
    digitalWrite(12,LOW);   //sets digital pin 12 low
  }
  else
  {
    digitalWrite(10,LOW);   //sets digital pin 10 low
    digitalWrite(11,LOW);   //sets digital pin 11 low
    digitalWrite(12,LOW);   //sets digital pin 12 low
  }
  
}
