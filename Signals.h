#include "Arduino.h"

enum signal {
	NONE,
	FOUND_IR,
	ALIGNED,
	NEXT_LEFT,
	NEXT_MID,
	NEXT_RIGHT,
	NEXT_REFILL,
	READY2FIRE,
	REFILL_DONE
};

// not strictly related to signalling, but location sync
// is a major part of what we're doing here so it feels
// right to include this
enum Location {
	REFILL,
	GOAL_LEFT,
	GOAL_MID,
	GOAL_RIGHT
};

void sendSignal(int s);

signal receiveSignal(int debug);
