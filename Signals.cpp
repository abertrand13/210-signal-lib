#include "Signals.h"

void sendSignal(signal s) {
	Serial.println(s);
	// Serial.write('h');
	// Serial.println("Transmitting");
}

/*
signal receiveSignal(void) {
	enum signal sig;
	
	if(Serial.available()) {
		sig = Serial.read();
		Serial.println('Receiving Signal!');
		// char x = Serial.read();
	} else {
		sig = NONE;
	}
	Serial.read(); // read in newline
	return sig;
} */


// Alternate receiveSignal implementation

signal receiveSignal(void) {
	int signal;
	while(Serial.available()) {
		signal = Serial.readStringUntil('\n');
		signal.trim();
	}
}
