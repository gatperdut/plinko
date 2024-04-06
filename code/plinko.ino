#include <Adafruit_NeoPixel.h>
#include <ezButton.h>

// Leds
#define LED_PIN 2

#define LED_COUNT 72

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

#define BLUE 0
#define GREEN 1
#define CYAN 2
#define RED 3
#define PURPLE 4
#define YELLOW 5

float colors[6][3] = {
  { 0.0,     0.0, 255.0 }, // BLUE
  { 0.0,   255.0,   0.0 }, // GREEN
  { 0.0,   255.0, 255.0 }, // CYAN
  { 255.0,   0.0,   0.0 }, // RED
  { 255.0,   0.0, 255.0 }, // PURPLE
  { 255.0, 255.0,   0.0 }  // YELLOW
};


// Buttons
ezButton btnBlue(3);
ezButton btnGreen(4);
ezButton btnCyan(5);
ezButton btnRed(6);
ezButton btnPurple(7);
ezButton btnYellow(8);

ezButton reset(9);

ezButton buttons[6] = {
  btnBlue,
  btnGreen,
  btnCyan,
  btnRed,
  btnPurple,
  btnYellow
};

// State
#define STATE_IDLE 0

int idleColor = 0;

int idleLed = 0;

#define STATE_RESULT 1

int resultBtn = -1;

bool resultBlink = false;

int state = STATE_IDLE;


void setup() {
  Serial.begin(9600);
  
  setupLeds();

  setupButtons();
}

void setupLeds() {
  strip.begin();
  
  strip.setBrightness(25); // max = 255

  strip.clear();
}

void setupButtons() {
  for (int i = 0; i < 6; i++) {
    buttons[i].setDebounceTime(50);  
  }
}

void loop() {
  loopButton();

  if (state == STATE_IDLE) {
    idle();
  }
  else if (state == STATE_RESULT) {
    result();
  }

  delay(50);
}

void loopButton() {
  reset.loop();

  if (state != STATE_IDLE && !reset.getState()) {
    state = STATE_IDLE;

    resultBtn = -1;

    resultBlink = false;

    idleColor = 0;

    idleLed = 0;

    strip.clear();

    return;
  }
  
  for (int i = 0; i < 6; i++) {
    buttons[i].loop();

    if (state != STATE_RESULT && !buttons[i].getState()) {
      state = STATE_RESULT;

      resultBtn = i;

      idleColor = 0;

      idleLed = 0;

      strip.clear();

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

    if (idleColor >= 6) {
      idleColor = 0;
    }
  }
} 

void result() {
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(
      i,
      colors[resultBtn][0] * (resultBlink ? 1 : 0),
      colors[resultBtn][1] * (resultBlink ? 1 : 0),
      colors[resultBtn][2] * (resultBlink ? 1 : 0)
    );

    strip.show();    
  }
  
  resultBlink = !resultBlink;
}
