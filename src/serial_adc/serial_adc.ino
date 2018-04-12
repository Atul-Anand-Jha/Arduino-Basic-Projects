void setup()
{
  Serial.begin(9600*2);
}


void loop()
{
  int i=analogRead(A0);
  Serial.println(i);
  delay(100);
}
