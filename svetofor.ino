void setup() 
{
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
  // put your setup code here, to run once:

}

void loop() 
{
  digitalWrite(11, HIGH);
   delay(5000);
   digitalWrite(10, HIGH);
   delay(500);
   digitalWrite(11, LOW);
   digitalWrite(10, LOW);
   digitalWrite(9, HIGH);
   delay(5000);
   digitalWrite(9, LOW);
   delay(500);
   digitalWrite(9, HIGH);
   delay(500);
   digitalWrite(9, LOW);
   digitalWrite(9, HIGH);
   delay(500);
   digitalWrite(9, LOW);
   // put your main code here, to run repeatedly:

}
