void setup() {
  // put your setup code here, to run once:
for(int i=3;i<=10;i++)
{
  pinMode(i,INPUT);
}


}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(4) && digitalRead(6))
  {
    Serial.println("no cross detected");
    Serial.println("line position -centre");
    delay(10);
  }
  else if(digitalRead(2) && digitalRead(4))
  {
    Serial.println("no cross detected");
    Serial.println("line position -left");
    delay(10);
  }
 else if(digitalRead(6) && digitalRead(8))
 {
Serial.println("no cross detected");
    Serial.println("line position -right");
    delay(10);
 }
 else if(digitalRead(2) && digitalRead(4) && digitalRead(6) && digitalRead(8))
 {
  Serial.println("cross detected");
    Serial.println("line position -centre");
    delay(10);
 }
 
}
