#ifndef _SPEED_H_
#define _SPEED_H_


void pwm_init()
{



	TCCR2=0x69;	
	DDRB|=(1<<PB3);
}



void speed(uint8_t perc)
{
TCCR2=0x69;	
	DDRB|=(1<<PB3);

uint8_t duty;

duty = (perc - 0) * (255 - 160) / (100 - 0) + 160;

        

	OCR2=duty;
	
}





#endif 