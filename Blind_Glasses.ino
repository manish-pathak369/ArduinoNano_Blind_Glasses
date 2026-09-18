float duration,distance;

void setup() {
pinMode(9, OUTPUT); // Buzzer pin
pinMode(10, OUTPUT); // Trig pin
pinMode(11, INPUT); // Echo pin
Serial.begin(9600);
}

void loop() {
digitalWrite(10, LOW);
delayMicroseconds(2);

digitalWrite(10, HIGH);
delayMicroseconds(10);
digitalWrite(10, LOW);

duration = pulseIn(11, HIGH);
distance = duration*0.034/2;

Serial.println(distance);
delay(500);
if(distance <= 20){
  digitalWrite(9, HIGH); //Use tone(BUZZER_PIN,1000); and noTone(BUZZER_PIN); Incase of Passive Buzzer
}
else{
  digitalWrite(9, LOW);
}
}
