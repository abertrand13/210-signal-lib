#include "Signals.h"

void sendSignal(int s) {
	Serial.write(s);
}

signal receiveSignal(int debug) {
	if(Serial.available()) {
		return debug ? Serial.parseInt() : Serial.read();
    //return Serial.read();
	} else {
		return NONE;
	}
}
