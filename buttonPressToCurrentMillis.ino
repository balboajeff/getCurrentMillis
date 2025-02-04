int storeCurrentMillis=0;
void setup() {
Serial.begin(9600);
pinMode(12, INPUT_PULLUP);
}
void loop() {
if(digitalRead(12)==LOW)
{
 storeCurrentMillis= millis();
Serial.println(storeCurrentMillis);
delay(300);
}
}
