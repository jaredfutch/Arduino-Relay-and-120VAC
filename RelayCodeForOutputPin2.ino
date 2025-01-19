int PhotoPin = A0; 
int Relay = 2;

void setup() {
  pinMode(Relay, OUTPUT);
Serial.begin(9600);
 
}
void loop() {
    int LightReading;
     LightReading = analogRead(PhotoPin);
Serial.println(LightReading); 
if(abs(LightReading) > 400){
    digitalWrite(Relay, HIGH);
  }  
  else{
      digitalWrite(Relay, LOW);
    }
    delay(10);
}
