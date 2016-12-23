#include <Interval.h>

/* Позволяет "засекать" промежутки времени. */

Interval::Interval(unsigned long interval, bool start_as_ready=true) {
	this->_interval = interval;
	this->_start_as_ready = start_as_ready;
}

boolean Interval::ready(){
	if (this->_start_as_ready) {
		this->_start_as_ready = false;
		return true;
	}
	
	if ((millis() - this->_lastRead) > this->_interval) {
		this->_lastRead = millis();
		return true;
	} else {
		return false;
	}
}

unsigned long Interval::duration(){
	return this->_interval;
}
