/*

	...for internal use

*/

// Version
#define VERSION_MAJOR		0
#define VERSION_MINOR		1
#define VERSION_REVISION	2
#define VERSION_PATCH_LEVEL	0

// ...debugging foo
#define debug(...) { }
#define debugln(...) { }

// ...some default functions

void BlinkyLED(int LEDPin, int BlinkPause) {

	if (LED_pin) {

		LEDPin = LED_pin;

	}

	digitalWrite(LEDPin, HIGH);
	delay(BlinkPause);
	digitalWrite(LEDPin, LOW);
	delay(BlinkPause);

}

