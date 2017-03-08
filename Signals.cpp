#include "Signals.h"

void sendSignal(signal s) {
	Serial.println(s);
	// Serial.write('h');
	// Serial.println("Transmitting");
}

signal receiveSignal(void) {
	enum signal sig;
	
	if(Serial.available() > 0) {
		// sig = Serial.read();
		char x = Serial.read();
	} else {
		sig = NONE;
	}
	Serial.read(); // read in newline
	return sig;
}
