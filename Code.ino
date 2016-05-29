const int analogInPin = A0;
int sensorValue = 450;
int outputValue = 112;
int spkr = 12;
void setup() {
  Serial.begin(9600);
  pinMode(spkr,OUTPUT);
}
void loop() {
  sensorValue = analogRead(analogInPin);
  outputValue = map(sensorValue, 450, 1023, 112, 255);
  Serial.print("sensor=  ");
  Serial.print(sensorValue);
  Serial.print("\t liquid point= ");
  Serial.println(outputValue);
  delay(500);
  if(sensorValue>0){
    for (int i=0; i<1000; i++)
  {
    digitalWrite(spkr, HIGH);
    delayMicroseconds(500);
    digitalWrite(spkr, LOW);
    delayMicroseconds(500);
    
   }
  }
}
