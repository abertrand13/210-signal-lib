#include "Signals.h"

void sendSignal(int s) {
	Serial.write(s);
}

signal receiveSignal(void) {
	if(Serial.available()) {
		return Serial.read();;
	} else {
		return NONE;
	}
}
