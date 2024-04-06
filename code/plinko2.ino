const int SignalPin = 6;


const int buzzer = 9;

int state; 

void setup() {
  Serial.begin(9600);
  pinMode(SignalPin, INPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  state = digitalRead(SignalPin);

  if(state == HIGH)
   Serial.println("Touched");
  else if(state == LOW)
   Serial.println("Not Touched");
  delay(1000);
}

void fanfare() {
  tone(buzzer, 987, 212);
  delay(212);
  
  tone(buzzer, 987, 212);
  delay(212);
  
  tone(buzzer, 987, 212);
  delay(212);
  
  tone(buzzer, 987, 428);
  delay(428);
  
  
  tone(buzzer, 784, 428);
  delay(428);
  
  tone(buzzer, 880, 428);
  delay(428);
  
  tone(buzzer, 987, 326);
  delay(326);
  
  tone(buzzer, 880, 107);
  delay(107);
  
  tone(buzzer, 987, 1200);
  delay(1200);
}
