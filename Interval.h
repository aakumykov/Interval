#include <Arduino.h>

/* Позволяет "засекать" промежутки времени. */

#ifndef Interval_h
#define Interval_h

class Interval
{
	public:
		Interval(unsigned long interval);
		boolean ready();
		unsigned long duration();

	private:
		unsigned long interval = 200;
		unsigned long lastRead = 0;
};

#endif