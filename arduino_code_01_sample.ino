int sensor=A0, soil;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial begin");
  delay(2000);   
}

void loop() {
   soil = analogRead(sensor);
    Serial.println(String("value: ") + soil);
    soil=map(soil, 1023, 363, 0, 100);
   Serial.println(String("MOISTURE CONTENT: ") + soil);
   delay(2000);
}