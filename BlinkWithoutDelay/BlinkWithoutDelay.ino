

// constants won't change. Used here to set a pin number:
const int buttonPin = 2;
const int ledPin = LED_BUILTIN; 
const int RledPin = 3;
const int GledPin = 4;
const int BledPin = 5; // the number of the LED pin

// Variables will change:
int buttonState = 0;
int ledState = LOW;
int ledcolor = 0;
bool ButtonPressed = false;
String currentcolor="led" ;
unsigned long previousMillis = 0;  // will store last time LED was updated
const long interval = 1000;  // interval at which to blink (milliseconds)

void setup(){
  pinMode(buttonPin, INPUT);
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.print("Current color: ");
  Serial.println(currentcolor);
  if(buttonState == HIGH && !ButtonPressed) {
  ledcolor = ledcolor + 1;
  ButtonPressed = true;
  }
  if(buttonState == LOW && ButtonPressed){
    //ledcolor = ledcolor + 1;
    ButtonPressed = false;
  }
  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  }
    if(ledcolor == 0){
    currentcolor="LED off";
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 1 ){
  // RED
    currentcolor="Red";
     if (ledState == LOW) { 
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  } else {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }
  else if (ledcolor == 2) {
    // GREEN
    currentcolor="Green";
     if (ledState == LOW) { 
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  } else {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }
  else if (ledcolor == 3) {
    // BLUE
    currentcolor="Blue";
     if (ledState == LOW) { 
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  } else {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }
  else if (ledcolor == 4) {
    // YELLOW
    currentcolor="Yellow";
     if (ledState == LOW) { 
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  } else {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }
  else if (ledcolor == 5) {
    // PURPLE
    currentcolor="Purple";
     if (ledState == LOW) { 
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  } else {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }
  else if (ledcolor == 6) {
    // CYAN
    currentcolor="Cyan";
     if (ledState == LOW) { 
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  } else {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }
  else if (ledcolor == 7) {
    // WHITE
    currentcolor="White";
     if (ledState == LOW) { 
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  } else {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }
  else if(ledcolor == 8){
    ledcolor = 0;
  }
}

 
