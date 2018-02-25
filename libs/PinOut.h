/*

	...the Arduino Pinout
	and mapping

*/

// ...get some clear and simple base
#define PPM_pin			2
#define CE_pin			3
#define	SCK_pin			4
#define MOSI_pin		5
#define	MISO_pin		6
#define NRF24_CS_pin	7
#define A7105_CS_pin	8
#define LED_pin			13

// spi outputs
#define  CE_on				PORTD	|= 0x08		// PORTD3
#define  CE_off				PORTD	&= 0xF7		// PORTD3
//
#define  SCK_on				PORTD	|= 0x10		// PORTD4
#define  SCK_off			PORTD	&= 0xEF		// PORTD4
//
#define  MOSI_on			PORTD	|= 0x20		// PORTD5
#define  MOSI_off			PORTD	&= 0xDF		// PORTD5
//
#define  MISO_on			PORTD	|= 0x40		// PORTD6
#define  MISO_off			PORTD	&= 0xBF		// PORTD6
//
#define  NRF24_CS_on		PORTD	|= 0x80		// PORTD7
#define	 NRF24_CS_off		PORTD	&= 0x7F		// PORTD7
//
#define	 A7105_CS_on		PORTB	|= 0x01		// PORTB8
#define	 A7105_CS_off		PORTB	&= 0xFE		// PORTB8
//
#define	 LED_on				PORTB	|= 0x20		// PORTB13
#define  LED_off			PORTB	&= 0xDF		// PORTB13
//
