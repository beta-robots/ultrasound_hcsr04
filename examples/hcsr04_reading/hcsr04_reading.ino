//testing HCSR04

//standard library
#include "Arduino.h"

//HCSR04 library
#include "ultrasound_hcsr04.h"

//pin assignement & constants
int PIN_LED = 13; // Pin 13 has a LED connected on most Arduino boards.
int PIN_TRIGGER = 2; //ultrasound trigger
int PIN_ECHO = 3; //ultrasound echo
int SERIAL_BAUD_RATE = 9600; //debugging

//HCSR04 object, with pins
UltrasoundHCSR04 hcsr04(PIN_TRIGGER, PIN_ECHO);

//global variables
unsigned long us_time;
float us_range;

//setup
void setup()
{
    //sets pin_led as a digital output
    pinMode(PIN_LED, OUTPUT);

    //opens serial port, sets data rate to 9600 bps, Useful for debugging
    Serial.begin(SERIAL_BAUD_RATE);
}

//main loop
void loop()
{
    // turn the LED on
    digitalWrite(PIN_LED, HIGH);

	//ultrasound ranging
	us_time = hcsr04.getTime();
	us_range = hcsr04.getRange();

    //print results if verbose mode
	Serial.print("us_time: ");
    Serial.println(us_time, DEC);
    Serial.print("us_range: ");
    Serial.println(us_range, DEC);

    //relax
    delay(500);
}
