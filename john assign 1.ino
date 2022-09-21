// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop()
{
  //PIR Sensor execution code//
  int p=digitalRead(4);
Serial.println(p);
digitalWrite(13,LOW);
if(p)
{
  double a= analogRead(A0);
  double t=(((a/1024)*5)-0.5)*100;
  Serial.print("Temperature Value");
  Serial.println(t);
   delay(1000);
  //For Detecting the Human presence//
  if (t>=37)
     Serial.println("Human Movement is Found!!!");
  if(t>=37) 
  tone(12,20);
  delay(1000);
  digitalWrite(13,HIGH);
  //For any movement in the surrounding//
    Serial.println("Some Movement is found!!!");
}
delay(1000);
}
