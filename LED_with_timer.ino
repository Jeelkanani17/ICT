void setup() {
  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH);   
  delay(10000);          //led off after 10 second's timer             
  digitalWrite(13, LOW);                  
}
