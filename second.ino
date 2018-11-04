//Motor Connections
//Change this if you wish to use another diagram
int In1 = 9;
int In2 = 10;
int In3 = 6;
int In4 = 5;
int heightOutput = 6;
int trigPin = A4; 
int echoPin = A5; 
 
void setup()
{
  // All motor control pins are outputs
 
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(heightOutput, OUTPUT);
  
}
void loop()
{
  goStraight();
  delay(1000);
  int distance = getDistance()
  
}

void goStraight()   //run both motors in the same direction
{
  // turn on motor A
  analogWrite(In1, 100);
  analogWrite(In2, 0);

}
long getDistance ()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distanceCM = microsecondsToCentimeters(duration);

  return distanceCM;
}