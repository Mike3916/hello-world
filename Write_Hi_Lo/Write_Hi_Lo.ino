void setup() {
  // set digital pin 13 as output
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);  //sets the digital pin 13 on
  delay(1000);            //waits 1s
  digitalWrite(13,LOW);   //sets digital pin 13 low
  delay(1000);            //waits 1s
}
