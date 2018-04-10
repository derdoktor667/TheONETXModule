// ...the PinOut on Arduino Nano V3.2

#define PPM_Pin		3

// TX
#define SERIAL_TX_pin	1								//PD1
#define SERIAL_TX_port	PORTD
#define SERIAL_TX_ddr	DDRD
#define SERIAL_TX_output SERIAL_TX_ddr	|= _BV(SERIAL_TX_pin)
#define SERIAL_TX_on	SERIAL_TX_port |=  _BV(SERIAL_TX_pin)
#define SERIAL_TX_off	SERIAL_TX_port &= ~_BV(SERIAL_TX_pin)
#define DEBUG_PIN_on
#define DEBUG_PIN_off
#define DEBUG_PIN_toggle

// Dial
#define PROTO_DIAL1_pin	2
#define PROTO_DIAL1_port	PORTB
#define PROTO_DIAL1_ipr  PINB
#define PROTO_DIAL2_pin	3
#define PROTO_DIAL2_port	PORTB
#define PROTO_DIAL2_ipr  PINB
#define PROTO_DIAL3_pin	4
#define PROTO_DIAL3_port	PORTB
#define PROTO_DIAL3_ipr  PINB
#define PROTO_DIAL4_pin	0
#define PROTO_DIAL4_port	PORTC
#define PROTO_DIAL4_ipr  PINC

// PPM
#define PPM_pin	 3										//D3 = PD3
#define PPM_port PORTD

// SCLK
#define SCLK_port PORTD
#define SCLK_ddr DDRD
#define SCLK_pin	4								//D4 = PD4
#define SCLK_output	SCLK_ddr  |=  _BV(SCLK_pin)
#define SCLK_on		SCLK_port |=  _BV(SCLK_pin)
#define SCLK_off	SCLK_port &= ~_BV(SCLK_pin)

// SDIO
#define SDI_pin	 5										//D5 = PD5
#define SDI_port PORTD
#define SDI_ipr  PIND
#define SDI_ddr  DDRD
#define SDI_on	SDI_port |= _BV(SDI_pin)
#define SDI_off	SDI_port &= ~_BV(SDI_pin)
#define SDI_1	(SDI_ipr & _BV(SDI_pin))
#define SDI_0	(SDI_ipr & _BV(SDI_pin)) == 0x00
#define SDI_input	SDI_ddr &= ~_BV(SDI_pin)
#define SDI_output	SDI_ddr |=  _BV(SDI_pin)

//SDO
#define SDO_pin		6									//D6 = PD6
#define SDO_port	PORTD
#define SDO_ipr		PIND
#define SDO_1 (SDO_ipr & _BV(SDO_pin))
#define SDO_0 (SDO_ipr & _BV(SDO_pin)) == 0x00

// A7105
#define A7105_CSN_pin	2								//D2 = PD2
#define A7105_CSN_port	PORTD
#define A7105_CSN_ddr	DDRD
#define A7105_CSN_output	A7105_CSN_ddr |= _BV(A7105_CSN_pin)
#define A7105_CSN_on	A7105_CSN_port |=  _BV(A7105_CSN_pin)
#define A7105_CSN_off	A7105_CSN_port &= ~_BV(A7105_CSN_pin)

// NRF24L01
#define NRF_CSN_pin		0								//D8 = PB0
#define NRF_CSN_port	PORTB
#define NRF_CSN_ddr		DDRB
#define NRF_CSN_output	NRF_CSN_ddr  |=  _BV(NRF_CSN_pin)
#define NRF_CSN_on		NRF_CSN_port |=  _BV(NRF_CSN_pin)
#define NRF_CSN_off		NRF_CSN_port &= ~_BV(NRF_CSN_pin)
#define NRF_CE_on
#define NRF_CE_off

// RF Switch
#define PE1_pin		1								//A1 = PC1
#define PE1_port	PORTC
#define PE1_ddr		DDRC
#define	PE1_output	PE1_ddr  |=  _BV(PE1_pin)
#define PE1_on		PE1_port |=  _BV(PE1_pin)
#define PE1_off		PE1_port &= ~_BV(PE1_pin)

#define PE2_pin		2								//A2 = PC2
#define PE2_port	PORTC
#define PE2_ddr		DDRC
#define	PE2_output	PE2_ddr  |=  _BV(PE2_pin)
#define PE2_on		PE2_port |=  _BV(PE2_pin)
#define PE2_off		PE2_port &= ~_BV(PE2_pin)

// LED
#define LED_pin		5								//D13 = PB5
#define LED_port	PORTB
#define LED_ddr		DDRB
#define LED_on		LED_port |= _BV(LED_pin)
#define LED_off		LED_port &= ~_BV(LED_pin)
#define LED_toggle	LED_port ^= _BV(LED_pin)
#define LED_output	LED_ddr  |= _BV(LED_pin)
#define IS_LED_on	(LED_port & _BV(LED_pin))
#define	LED2_on
#define	LED2_off
#define	LED2_toggle
#define	LED2_output
#define	IS_LED2_on		0

// Bind
#define BIND_pin			5						//D13 = PB5
#define BIND_port			PORTB
#define BIND_ipr			PINB
#define BIND_ddr			DDRB
#define BIND_SET_INPUT		BIND_ddr &= ~_BV(BIND_pin)
#define BIND_SET_OUTPUT		BIND_ddr |=  _BV(BIND_pin)
#define BIND_SET_PULLUP		BIND_port |= _BV(BIND_pin)
#define IS_BIND_BUTTON_on	( (BIND_ipr & _BV(BIND_pin)) == 0x00 )

// Timer
#define OCF1A_bm _BV(OCF1A)
#define OCF1B_bm _BV(OCF1B)
#define SET_TIMSK1_OCIE1B	TIMSK1 |= _BV(OCIE1B)
#define CLR_TIMSK1_OCIE1B	TIMSK1 &=~_BV(OCIE1B)

// EEPROM
#define EE_ADDR uint8_t*
