#ifndef _CONFIG_H_
#define _CONFIG_H_


//DCMotor config
#define UINCPOW 10

#define RAMP_UINCPOW 10
#define RAMP_MAXERROR 1

//#define MOTC_PWM 1
//#define MOTD_PWM 2

#define MOTC_END KZ1
#define MOTC_ENDLEVEL 0
#define MOTC_A KZ1
#define MOTC_B KZ1

#define MOTD_END KZ1
#define MOTD_ENDLEVEL 0
#define MOTD_A KZ1
#define MOTD_B KZ1

#define ANALOG_FILTER 5

#define LAMP1 K6
#define LAMP2 K7

//DMX config:
#define DMX_UART_NUM 	AUXSERIAL_NUM // 2 for Versa,  1 for 8X2A
#define DMX_UART_PIN	AUXSERIAL_TX  // K11 for Versa, K5 for 8X2A
#define DMX_NBCHAN 	256


#endif // _CONFIG_H_

