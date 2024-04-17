#include <Adafruit_NeoPixel.h>
#include <ezButton.h>

// Leds
#define LED_PIN 2
#define LED_COUNT 72

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

// Buzzer
#define BUZZER_PIN 3

// Sensors
#define SENSOR_1_PIN 4
#define SENSOR_2_PIN 5
#define SENSOR_3_PIN 6
#define SENSOR_4_PIN 7
#define SENSOR_5_PIN 8

int sensors[5] = {
  SENSOR_1_PIN,
  SENSOR_2_PIN,
  SENSOR_3_PIN,
  SENSOR_4_PIN,
  SENSOR_5_PIN,
};

// Colors
#define BLUE 0
#define GREEN 1
#define RED 2
#define PURPLE 3
#define YELLOW 4

float colors[5][3] = {
  { 0.0,     0.0, 255.0 }, // BLUE
  { 0.0,   255.0,   0.0 }, // GREEN
  { 255.0,   0.0,   0.0 }, // RED
  { 255.0,   0.0, 255.0 }, // PURPLE
  { 255.0, 255.0,   0.0 }  // YELLOW
};

// Reset
#define RESET_PIN 9

ezButton reset(RESET_PIN);

// States
#define STATE_IDLE 0
#define STATE_RESULT 1

int idleColor = 0;
int idleLed = 0;

int resultSensor = -1;
bool resultBlink = false;

int state = STATE_IDLE;


void setup() {
  setupBuzzer();
  
  setupLeds();

  setupSensors();
}


void setupBuzzer() {
  pinMode(BUZZER_PIN, OUTPUT);
}


void setupLeds() {
  strip.begin();
  
  strip.setBrightness(25); // max = 255

  strip.clear();
}


void setupSensors() {
  for (int i = 0; i < 5; i++) {
    pinMode(sensors[i], INPUT);
  }
}


void loop() {
  loopSensor();

  if (state == STATE_IDLE) {
    idle();
  }
  else if (state == STATE_RESULT) {
    result();
  }

  delay(50);
}

void loopSensor() {
  reset.loop();

  if (state != STATE_IDLE && !reset.getState()) {
    state = STATE_IDLE;

    resultSensor = -1;

    resultBlink = false;

    idleColor = 0;

    idleLed = 0;

    strip.clear();

    return;
  }
  
  for (int i = 0; i < 5; i++) {
    int sensorState = digitalRead(sensors[i]);

    if (state != STATE_RESULT && sensorState == HIGH) {
      state = STATE_RESULT;
      
      fanfare(BUZZER_PIN);

      resultSensor = i;

      idleColor = 0;

      idleLed = 0;

      return;
    }
  }
}

void idle() {
  strip.setPixelColor(
    idleLed,
    colors[idleColor][0],
    colors[idleColor][1],
    colors[idleColor][2]
  );
  
  strip.show();

  idleLed++;

  if (idleLed >= LED_COUNT) {
    idleLed = 0;

    idleColor++;

    if (idleColor >= 5) {
      idleColor = 0;
    }
  }
} 

void result() {
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(
      i,
      colors[resultSensor][0] * (resultBlink ? 1 : 0),
      colors[resultSensor][1] * (resultBlink ? 1 : 0),
      colors[resultSensor][2] * (resultBlink ? 1 : 0)
    );

    strip.show();    
  }
  
  resultBlink = !resultBlink;
}
