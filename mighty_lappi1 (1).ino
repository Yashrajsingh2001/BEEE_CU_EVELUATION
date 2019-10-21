void setup()
{
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  if(digitalRead(9) == HIGH)
  {
    digitalWrite(5,LOW);
    digitalWrite(10,HIGH);
  }

  else if(digitalRead(9) == LOW)
        {
        digitalWrite(10,LOW);
        digitalWrite(5,HIGH);
    }
}