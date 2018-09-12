#define LED 10
#define POT A0

int PotValue = 0;
int LedValue = 0;

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  
  PotValue = analogRead(POT);
  
  LedValue = map(PotValue, 0, 1023, 0, 255);
  
  analogWrite(LED, LedValue);
  
  Serial.print("Potentiometer = ");
  Serial.print(PotValue);
  Serial.print("\t output = ");
  Serial.println(LedValue);
  delay(200);
  
}
