#include <Arduino.h>

/* Позволяет "засекать" промежутки времени. */

#ifndef Interval_h
#define Interval_h

class Interval
{
	public:
		Interval(unsigned long interval, bool start_as_ready=true);
		boolean ready();
		unsigned long duration();

	private:
		unsigned long _interval;
		unsigned long _lastRead = 0;
		bool _ready;
		bool _start_as_ready;
};

#endif
