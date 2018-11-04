int pumpPin = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(pumpPin, OUTPUT);
}

void loop ()
{
  digitalWrite(pumpPin, HIGH);
  delay(10000);
  digitalWrite(pumpPin, LOW);

  exit(0);
}