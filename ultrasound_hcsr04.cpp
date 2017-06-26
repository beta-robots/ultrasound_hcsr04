#include "ultrasound_hcsr04.h"

UltrasoundHCSR04::UltrasoundHCSR04(int _pin_trigger, int _pin_echo) :
	pin_trigger_(_pin_trigger),
  	pin_echo_(_pin_echo)
{
	pinMode(pin_trigger_, OUTPUT);
	pinMode(pin_echo_, INPUT);
}

UltrasoundHCSR04::~UltrasoundHCSR04()
{
	//nothing to do
}

unsigned long UltrasoundHCSR04::getTime()
{
	unsigned long dt; //microseconds

	//generate a 10us TTL pulse at trigger pin
	digitalWrite(pin_trigger_, LOW);
	delayMicroseconds(2);
	digitalWrite(pin_trigger_, HIGH);
	delayMicroseconds(10);
	digitalWrite(pin_trigger_, LOW);

	//count the delay up to receive an echo
	dt = pulseIn(pin_echo_, HIGH);
	return dt;

}

float UltrasoundHCSR04::getRange()
{
	unsigned long dt; //microseconds
	float range; //meters

	//get the ultrasound pulse flight time
	dt = getTime();

	//convert time to range and return value.
	range = (float)(dt*SOUND_SPEED*1e-6)/2.0; //Divide by 2 to account come and back ultrasound wave path
	return range;
}
