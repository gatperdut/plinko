const int SignalPin = 6;


const int buzzerPin = 9;

int state; 

void setup() {
  Serial.begin(9600);
  pinMode(SignalPin, INPUT);

  pinMode(buzzerPin, OUTPUT);

//  battle();
}

void loop() {
  state = digitalRead(SignalPin);

  if(state == HIGH)
   Serial.println("Touched");
  else if(state == LOW)
   Serial.println("Not Touched");
  delay(1000);
}

//void fanfare() {
//  tone(buzzerPin, 156);
//  delay(63);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(63);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 233);
//  delay(68);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 156);
//  delay(68);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(68);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 233);
//  delay(68);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 311);
//  delay(63);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(68);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(68);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 622);
//  delay(68);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(63);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 932);
//  delay(63);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1245);
//  delay(135);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1245);
//  delay(130);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1245);
//  delay(130);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1245);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1109);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1245);
//  delay(266);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1109);
//  delay(130);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1245);
//  delay(1203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1797);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 622);
//  delay(1797);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1797);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 622);
//  delay(1802);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1802);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(203);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(396);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(198);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(401);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(434);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 554);
//  delay(250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(3073);
//  noTone(buzzerPin);
//}
//
//void battle() {
//  tone(buzzerPin, 165);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(1172);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1094);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(176);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(20);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 208);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 104);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 208);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 233);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 117);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 233);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 208);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(469);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(176);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(20);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1976);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1760);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 831);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1568);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 52);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 104);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 156);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 831);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1397);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 156);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 58);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 117);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1976);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 55);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 82);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1760);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1568);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1397);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1875);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 82);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1397);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1397);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 55);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 82);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 123);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 123);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 49);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 82);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 123);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 82);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 831);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 622);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 311);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 932);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 988);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 880);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 55);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1563);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 87);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 220);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 440);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 110);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(1875);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 49);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 123);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 175);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 494);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 247);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 311);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 104);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 208);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 104);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 208);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 117);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 233);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 117);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 233);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 311);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(469);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 52);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 104);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 311);
//  delay(781);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(469);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(781);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(469);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 311);
//  delay(469);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 415);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 52);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 104);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(1250);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(469);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 58);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 117);
//  delay(938);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(781);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(625);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 349);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 466);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 698);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 58);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 117);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(2344);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(2500);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 65);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 73);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 82);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 98);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 131);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 147);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 165);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 196);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(313);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 262);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 294);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 330);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 392);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 523);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 587);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 659);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 784);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1047);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1175);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1319);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 1568);
//  delay(156);
//  noTone(buzzerPin);
//
//  tone(buzzerPin, 2093);
//  delay(2500);
//  noTone(buzzerPin);
//}
