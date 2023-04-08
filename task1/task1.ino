
const int ledPin = 9;  // the number of the LED pin
const int ledPin1 = 10; 
const int ledPin2= 11;

const int ledPin3 = 3; 
const int ledPin4= 5;
const int ledPin5 = 6; 
int ledState = LOW;  // ledState used to set the LED
int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;  // ledState used to set the LED
int ledState4 = LOW;
int ledState5 = LOW;

unsigned long previousMillis = 0;  // will store last time LED was updated
unsigned long previousMillis1 = 0; 
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0;  // will store last time LED was updated
unsigned long previousMillis4 = 0; 
unsigned long previousMillis5 = 0; 

const long interval1 = 50;  // interval at which to blink (milliseconds)
const long interval2 = 1000;  
const long interval3 = 10000;
const long interval4 = 20000;  // interval at which to blink (milliseconds)
const long interval5 = 25000;  
const long interval6 = 33000;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {

  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis >= interval1) {

    previousMillis = currentMillis;

    if (ledState == LOW) {
      ledState = HIGH;
      //PORTB |= 2;
    } else {
      ledState = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin, ledState);
  }

  if (currentMillis - previousMillis1 >= interval2) {

    previousMillis1 = currentMillis;

    if (ledState1 == LOW) {
      ledState1 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState1 = LOW;
      //PORTB &= 0xFD;
    }
  
    digitalWrite(ledPin1, ledState1);
  }
    if (currentMillis - previousMillis2 >= interval3) {

    previousMillis2 = currentMillis;

    if (ledState2 == LOW) {
      ledState2 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState2 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin2, ledState2);

  }
  if (currentMillis - previousMillis3 >= interval4) {

    previousMillis3 = currentMillis;

    if (ledState3 == LOW) {
      ledState3 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState3 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin3, ledState3);

  }
  if (currentMillis - previousMillis4 >= interval5) {

    previousMillis4 = currentMillis;

    if (ledState4 == LOW) {
      ledState4 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState4 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin4, ledState4);

  }
  if (currentMillis - previousMillis5 >= interval6) {

    previousMillis5 = currentMillis;

    if (ledState5 == LOW) {
      ledState5 = HIGH; 
      //PORTB |= 2;
    } else {
      ledState5 = LOW;
      //PORTB &= 0xFD;
    }

    digitalWrite(ledPin5, ledState5);

  }
}

