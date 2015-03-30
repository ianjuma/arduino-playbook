/*
array sketch
an array of switches controls an array of LEDs
*/
int inputPins[] = { 2,3,4,5 }; // create an array of pins for switch inputs
int ledPins[]   = { 10,11,12,13 };

// create array of output pins for LEDs
void setup() {
	for(int index = 0; index < 4; index++) {
		pinMode(ledPins[index], OUTPUT);
		pinMode(inputPins[index], INPUT);
		digitalWrite(inputPins[index],HIGH);
	}
	// declare LED as output
	// declare pushbutton as input
	// enable pull-up resistors
}

void loop() {
	for(int index = 0; index < 4; index++) {
		int val = digitalRead(inputPins[i]);
		if (val == LOW) {
			digitalWrite(ledPins[index], HIGH);
		} else {
			digitalWrite(ledPins[i], LOW);
		}
	}
}
