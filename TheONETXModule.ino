/*  
  The ONE TX Module
  derdoktor667@gmail.com
 */

// ...enable debugging globally for now
#define DEBUG

// ...grabbin´ all the parts
#include <avr\eeprom.h>
#include <util\atomic.h>
#include "libs\PinOut.h"
#include "libs\TheONETXModule.h"

// ...and some variables
volatile int No_PPM_Signal_Found = true;
static uint8_t txid[4];

void setup() {
	
	// ...get really "random"
	randomSeed((analogRead(A0) &0x1F) | (analogRead(A1) << 5));
	
	for (uint8_t i = 0; i < 4; i++) {
		
		txid[i] = random();
	
		}

	// ...there will be no PPM Signal on firing up
	No_PPM_Signal_Found = true;

	// ...fire up the serial port
	Serial.begin(57600);

#ifdef DEBUG

	// ...greetings

	Serial.println("  ");
	Serial.println("---------------------------");
	Serial.println("Starting TheONETXModule... ");
	Serial.println("  ");

#endif // DEBUG

	// ...set the I/O Pins
	pinMode(PPM_pin, INPUT);
	pinMode(CE_pin, OUTPUT);
	pinMode(SCK_pin, OUTPUT);
	pinMode(MOSI_pin, OUTPUT);
	pinMode(MISO_pin, INPUT);
	pinMode(NRF24_CS_pin, OUTPUT);
	pinMode(A7105_CS_pin, OUTPUT);
	pinMode(LED_pin, OUTPUT);

	// ...cut the lights
	digitalWrite(LED_pin, LOW);
	
}

void loop() {

	while (No_PPM_Signal_Found) {

		BlinkyLED(LED_pin, 100);

	}

}
