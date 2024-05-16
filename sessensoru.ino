int sensor_pin=3;
int sari_LED=2;
void setup() {
  pinMode(sensor_pin, INPUT);
  pinMode(sari_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorVeri=digitalRead(sensor_pin);
  if(sensorVeri==LOW){
    Serial.println("Ses Algılandı");
    digitalWrite(sari_LED, HIGH);
    delay(500);
  }
  else
  {
    digitalWrite(sari_LED, LOW);
  }

}
