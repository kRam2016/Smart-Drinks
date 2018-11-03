//Motor Connections
//Change this if you wish to use another diagram
int In1 = 9;
int In2 = 10;
int In3 = 6;
int In4 = 5;
 
 
void setup()
{
  // All motor control pins are outputs
 
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
}
void goStraight()   //run both motors in the same direction
{
  // turn on motor A
  analogWrite(In1, 100);
  analogWrite(In2, 0);

}
void loop()
{
  goStraight();
  delay(1000);
}
