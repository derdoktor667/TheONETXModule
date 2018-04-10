/*
  The ONE TX Module
  derdoktor667@gmail.com
*/

#include "PinOut.h"

// ...somw global definitions
#define CPU_MULTI	(F_CPU/8000000)

#define	AILERON  0
#define	ELEVATOR 1
#define	THROTTLE 2
#define	RUDDER   3

#define PPM_MAX_100 2012
#define PPM_MIN_100 988

// ...the PPM Array to store the Channel values
int PPM[16];

void setup() {

	// ...listen all up
	DDRB=0x00;
	DDRC=0x00;
	DDRD=0x00;

	// Update LED
	LED_off;
	LED_output;
	
	// ...start the serial
	Serial.begin(57600);
	Serial.println("Waiting for PPM Signal...");

	// ...the PPM_Pin is an input
	pinMode(PPM_Pin, INPUT);

	// ...the interrupt for the PPM_ISR
	attachInterrupt(digitalPinToInterrupt(PPM_Pin), PPM_Reader, CHANGE);

	// ...the right timers
	TCCR1A = 0;
	TCCR1B = 0;
	TCCR1B |= (1 << CS11);

}

void loop() {

}

void PPM_Reader() {

	static unsigned int PULSE;
	static unsigned long COUNTER;
	static byte CHANNEL;
	static unsigned long LAST_MICROS;

	COUNTER = TCNT1;
	TCNT1 = 0;

	if (COUNTER < 510 * CPU_MULTI) {  //must be a pulse if less than 510us
		PULSE = COUNTER;
	}
	else if (COUNTER > 1910 * CPU_MULTI) {  //sync pulse
		CHANNEL = 0;
	}
	else {  //servo values between 710us and 2420us will end up here
		PPM[CHANNEL] = (COUNTER + PULSE) / CPU_MULTI;
		// Serial.print(PPM[CHANNEL]);
		// Serial.print("  ");
		CHANNEL++;
	}
}
