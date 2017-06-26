#ifndef ULTRASOUND_HCSR04_H
#define ULTRASOUND_HCSR04_H

//Arduino
#include "Arduino.h"

//constants
#define SOUND_SPEED 343 // [m/s]. https://en.wikipedia.org/wiki/Speed_of_sound

//class for accelerometer ADXL335
class UltrasoundHCSR04
{
	protected:
		//variables
		int pin_trigger_; //pin to trigger the ultrasound pulse
		int pin_echo_; //pin to read the ultrasound echo

	public:
		//constructor. Allows only with xy mode (no z)
		UltrasoundHCSR04(int _pin_trigger, int _pin_echo);

		//destructor
		~UltrasoundHCSR04();

		//Returns the ultrasound pulse flight time in microseconds
		unsigned long getTime();

		//Returns the range in meters. 0 means no obstacle detected.
		float getRange();
};
#endif
