#include <Interval.h>

/* Позволяет "засекать" промежутки времени. */

Interval::Interval(unsigned long interval) {
	this->interval = interval;
}

boolean Interval::ready(){
	if ((millis() - this->lastRead) > this->interval) {
		this->lastRead = millis();
		return true;
	} else {
		return false;
	}
}

unsigned long Interval::duration(){
	return this->interval;
}
