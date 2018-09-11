//LED turns on when room is dark

#define LED 9
int sensorValue=0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(A0);
  Serial.println("Light Intensity : ");
  Serial.println(sensorValue);
 
  delay(1000);   
  if (sensorValue > 500) { 
    digitalWrite(LED, HIGH);
    Serial.println("Light Status : ON ");   
  }
 	 else  {
    digitalWrite(LED, LOW);
    Serial.println("Light Status : OFF ");
  }
}
