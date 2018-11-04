int trigPin = 10;
int echoPin = 9;
int pumpPin = 13;
int heightInputPin = A4;
long duration, distanceCM, height;
long heightFill;



void setup() {
  Serial.begin(9600);
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  pinMode (heightInputPin, INPUT);
  pinMode(pumpPin, OUTPUT);
  long totalHeight = getDistance();
  height = analogRead(heightInputPin);
  heightFill = (totalHeight - height)*0.8;
  

}

void loop() {
  digitalWrite(pumpPin, HIGH);
  while (getDistance() >  heightFill)
  {}
  digitalWrite(pumpPin, LOW);

  exit(0);
 
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

long microsecondsToCentimeters(long duration)
{
  return (duration / 29.0)/2.0;
}