/////////////////////////////////////////////////////////////////////////////////////////////////////
///  Project Name : fiinal
//
//  Target Board : atmega8
//
//  Date Created : 26-11-2020 21:36:13
// 
//  Online Resource  : www.electronicsforstudents.com
//
//  Libraries Included : 
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<avr/io.h>
#include<util/delay.h>


#include "speed.h"


int main()
{
int ls,rs,i;	// VARIBALES TO READ STATUS OF IR SENSOR
			// ls(LEFT  SENSOR) : OUTPUT OF LEFT  SIDE SENSOR 
			// rs(RIGHT SENSOR) : OUTPUT OF RIGHT SIDE SENSOR 

	while (1)
	{
	
	ls = read(portc,0);
	rs = read(portc,1);
	
		if(ls==1 && rs==1)
		{
				
		for(i=100;i<2000;i=i+100)  // BUZZER SWITCHES ON / OFF WITH INCREASING DELAY
		{
			write(portc,4,h);
			_delay_ms(i);
			write(portc,4,l);
			_delay_ms(i);
			write(portb,all,h);  //switch on all leds
			_delay_ms(500);
			write(portb,all,l); //switch off all leds
			_delay_ms(500);
			
			for(int j=1;i<4;i=i+=)
			{	write(portd,4,h); 
				write(portd,5,l);
				_delay_ms(500);
			}
			exit(0);
		}
		
		}
		
		if(ls==1||rs==1)
		{
		write(portc,4,l);
		for(int j=1;i<4;i=i+=)
			{	write(portd,4,l); 
				write(portd,5,h);
				_delay_ms(500);
			}
		_delay_ms(500);
		write(portb,all,h);
		}
	
	}



}