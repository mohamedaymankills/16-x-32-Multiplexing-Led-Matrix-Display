/*
 * code 1.c
 *
 * Created: 7/6/2023 12:36:37 AM
 * Author : Mohamed Ayman
 
   Small perif For the code 
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>






void delay ()
{
	
	TCCR0 = (1<<CS02)|(1<<CS02);
	TCNT0 = 246 ;
	while((TIFR &(1<<TOV0))==0);
	TIFR =(1<<TOV0);
	
}



int main(void)
{
	
	DDRA = 0b11111111 ;
	DDRB = 0b11111111 ;
	DDRC = 0b11111111 ;
	DDRD = 0b11111111 ; 
	DDRE = 0b11111111 ;
	DDRF = 0b11111111 ;
		
	
	
    
    while (1) 
    {
		
		
		// The defulte of All ports  ( OFF )
		
		PORTA = 0b00000000 ;
	    PORTB = 0b00000000 ;
		PORTC = 0b11111111 ;
		PORTD = 0b11111111 ;
		PORTE = 0b11111111 ;
		PORTF = 0b11111111 ; 
		
		
		_delay_ms(10);
		
		

	   
    //  stickman siting frame  (First frame )
	
	for (int i = 0 ; i < 94 ; i++)
	
	
	{
		
		
	  PORTA = 0b00000001 ; 
      PORTE = 0b11000111 ;
	  _delay_ms(1);
	    
	  PORTA = 0b00000010 ;
	  PORTE = 0b10111011 ;
	  _delay_ms(1);
	  
	  PORTA = 0b00000100 ;
	  PORTE = 0b10111011 ;
	  _delay_ms(1);
	  
	  PORTA = 0b00001000 ;
	  PORTE = 0b10111011 ;
	  _delay_ms(1);	
	  
	  PORTA = 0b00010000 ;
	  PORTE = 0b11000111 ;
	  _delay_ms(1);	
	  
	  PORTA = 0b00100000 ;
	  PORTE = 0b11101111 ;
	  _delay_ms(1);	      	  
	  	 
	  PORTA = 0b01000000 ;
	  PORTE = 0b11000011 ;
	  _delay_ms(1);		   
	  
	  PORTA = 0b10000000 ;
	  PORTE = 0b01001101 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);
	  
	  PORTA = 0b00000000 ;
	  PORTB = 0b00000001 ;
	  PORTE = 0b01100110 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	  
	  
	  PORTB = 0b00000001 ;
	  PORTE = 0b01100110 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);
	  
	  PORTB = 0b00000010 ;
	  PORTE = 0b01100110 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	 
	  
	  PORTB = 0b00000100 ;
	  PORTE = 0b01101111 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	   
	  
	  PORTB = 0b00001000 ;
	  PORTE = 0b00000111 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	  	  
	  
	  PORTB = 0b00010000 ;
	  PORTE = 0b00011011 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	  
	  
	  PORTB = 0b00100000 ;
	  PORTE = 0b11001011 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	  
	  
	  PORTB = 0b01000000 ;
	  PORTE = 0b11010101 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	
	  
	  PORTB = 0b10000000 ;
	  PORTE = 0b11010101 ;
	  PORTF = 0b11111110 ;
	  _delay_ms(1);	    
	  
	}
	  
	  
	  
	      // stickman 2 fighter (Secend Frame )
		
		
		
	for (int j = 0 ; j < 94 ; j++)
		{
			
		
		
		  
		PORTF = 0b11111111 ;
		PORTB = 0b00000000 ;
		PORTE = 0b11111111 ;
		PORTA = 0b00000001 ;
		PORTC = 0b01111111 ;
		PORTD = 0b11111100 ;
		_delay_ms(1);
		
		PORTA = 0b00000010 ;
		PORTC = 0b10111111 ;
		PORTD = 0b11111011 ;
		_delay_ms(1);
		
		PORTA = 0b00000100 ;
		PORTC = 0b10111111 ;
		PORTD = 0b11111011 ;
		_delay_ms(1);				
		
		PORTA = 0b00001000 ;
		PORTC = 0b10111111 ;
		PORTD = 0b11111011 ;
		_delay_ms(1);
		
		PORTA = 0b00010000 ;
		PORTC = 0b01111111 ;
		PORTD = 0b11111100 ;
		_delay_ms(1);			
		
		PORTA = 0b00100000 ;
		PORTC = 0b11111111 ;
		PORTD = 0b11111110 ;
		_delay_ms(1);			
		
		PORTA = 0b01000000 ;
		PORTC = 0b01111111 ;
		PORTD = 0b11111100 ;
		_delay_ms(1);		
		
		PORTA = 0b10000000 ;
		PORTC = 0b10111111 ;
		PORTD = 0b11111010 ;
		_delay_ms(1);	
		
		PORTA = 0b00000000 ;
		PORTB = 0b00000001 ;
		PORTC = 0b10111111 ;
		PORTD = 0b11111010 ;
		_delay_ms(1);		
		
		PORTB = 0b00000010 ;
		PORTC = 0b11011111 ;
		PORTD = 0b11110110 ;
		_delay_ms(1);	
		
		PORTB = 0b00000100 ;
		PORTC = 0b01011111 ;
		PORTD = 0b11110100 ;
		_delay_ms(1);		
		
		PORTB = 0b00001000 ;
		PORTC = 0b01111111 ;
		PORTD = 0b11111101 ;
		_delay_ms(1);	
		
		PORTB = 0b00010000 ;
		PORTC = 0b10111111 ;
		PORTD = 0b11111101 ;
		_delay_ms(1);					
		
		PORTB = 0b00100000 ;
		PORTC = 0b10111111 ;
		PORTD = 0b11111101 ;
		_delay_ms(1);	
		
		PORTB = 0b01000000 ;
		PORTC = 0b11011111 ;
		PORTD = 0b11111101 ;
		_delay_ms(1);		
		
		PORTB = 0b10000000 ;
		PORTC = 0b11011111 ;
		PORTD = 0b11111101 ;
		_delay_ms(1);			
		
		
		}
		
		
		
		// The both fighters ( Third Frame )
		
		
	for (int x = 0 ; x < 138 ; x++)
		{
			
		
		PORTA = 0b00000001 ;
		PORTC = 0b11100011 ;
		PORTF = 0b11100011 ;
		PORTB = 0b00000000 ;
		PORTD = 0b11111111 ;
		PORTE = 0b11111111 ;
		_delay_ms(1);
		
		PORTA = 0b00000010 ;
		PORTC = 0b11011101 ;
		PORTF = 0b11011101 ;		
		_delay_ms(1);
		
		PORTA = 0b00000100 ;
		PORTC = 0b11011101 ;
		PORTF = 0b11011101 ;
		_delay_ms(1);
		
		PORTA = 0b00001000 ;
		PORTC = 0b11011101 ;
		PORTF = 0b11011101 ;
		_delay_ms(1);
		
		PORTA = 0b00010000 ;
		PORTC = 0b11100011 ;
		PORTF = 0b11100011 ;						
		_delay_ms(1);
		
		PORTA = 0b00100000 ;
		PORTC = 0b11110111 ;
		PORTF = 0b11110111 ;
		_delay_ms(1);		
		
		PORTA = 0b01000000 ;
		PORTC = 0b11100011 ;
		PORTF = 0b11100001 ;
		_delay_ms(1);		
		
		PORTA = 0b10000000 ;
		PORTC = 0b11010101 ;
		PORTE = 0b01111111 ;
		PORTF = 0b00101011 ;
		_delay_ms(1);		
		
		PORTA = 0b00000000 ;
		PORTB = 0b00000001 ;
		PORTC = 0b11010101 ;
		PORTE = 0b01111111 ;
		PORTF = 0b00110011 ;
		_delay_ms(1);		
		
		PORTB = 0b00000010 ;
		PORTC = 0b10110110 ;
		PORTE = 0b01111111 ;
		PORTF = 0b00110101 ;
		_delay_ms(1);		
		
		PORTB = 0b00000100 ;
		PORTC = 0b10100010 ;
		PORTE = 0b11111111 ;
		PORTF = 0b00110111 ;
		_delay_ms(1);		
		
		PORTB = 0b00001000 ;
		PORTC = 0b11101011 ;
		PORTF = 0b00000011 ;
		_delay_ms(1);	
		
		PORTB = 0b00010000 ;
		PORTC = 0b11011101 ;
		PORTE = 0b11111111 ;
		PORTF = 0b00001101 ;
		_delay_ms(1);			
		
		PORTB = 0b00100000 ;
		PORTC = 0b11011101 ;
		PORTF = 0b01100101 ;
		_delay_ms(1);	
			
		PORTB = 0b01000000 ;
		PORTC = 0b10111110 ;
		PORTF = 0b01101010 ;
		_delay_ms(1);
		
		PORTB = 0b10000000 ;
		PORTC = 0b10111110 ;
		PORTF = 0b01101010 ;
		_delay_ms(1);	
		
		
		}
		
	   
	       //  stickman siting frame  (First frame )
	       
	       for (int i = 0 ; i < 57 ; i++)
	       
	       
	       {
		       
		       
		       PORTA = 0b00000001 ;
		       PORTE = 0b11000111 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00000010 ;
		       PORTE = 0b10111011 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00000100 ;
		       PORTE = 0b10111011 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00001000 ;
		       PORTE = 0b10111011 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00010000 ;
		       PORTE = 0b11000111 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00100000 ;
		       PORTE = 0b11101111 ;
		       _delay_ms(1);
		       
		       PORTA = 0b01000000 ;
		       PORTE = 0b11000011 ;
		       _delay_ms(1);
		       
		       PORTA = 0b10000000 ;
		       PORTE = 0b01001101 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00000000 ;
		       PORTB = 0b00000001 ;
		       PORTE = 0b01100110 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00000001 ;
		       PORTE = 0b01100110 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00000010 ;
		       PORTE = 0b01100110 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00000100 ;
		       PORTE = 0b01101111 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00001000 ;
		       PORTE = 0b00000111 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00010000 ;
		       PORTE = 0b00011011 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00100000 ;
		       PORTE = 0b11001011 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b01000000 ;
		       PORTE = 0b11010101 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b10000000 ;
		       PORTE = 0b11010101 ;
		       PORTF = 0b11111110 ;
		       _delay_ms(1);
		       
	       }
	       
	       
	       
	       // stickman 2 fighter (Secend Frame )
	       
	       
	       
	       for (int j = 0 ; j < 57 ; j++)
	       {
		       
		       
		       
		       
		       PORTF = 0b11111111 ;
		       PORTB = 0b00000000 ;
		       PORTE = 0b11111111 ;
		       PORTA = 0b00000001 ;
		       PORTC = 0b01111111 ;
		       PORTD = 0b11111100 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00000010 ;
		       PORTC = 0b10111111 ;
		       PORTD = 0b11111011 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00000100 ;
		       PORTC = 0b10111111 ;
		       PORTD = 0b11111011 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00001000 ;
		       PORTC = 0b10111111 ;
		       PORTD = 0b11111011 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00010000 ;
		       PORTC = 0b01111111 ;
		       PORTD = 0b11111100 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00100000 ;
		       PORTC = 0b11111111 ;
		       PORTD = 0b11111110 ;
		       _delay_ms(1);
		       
		       PORTA = 0b01000000 ;
		       PORTC = 0b01111111 ;
		       PORTD = 0b11111100 ;
		       _delay_ms(1);
		       
		       PORTA = 0b10000000 ;
		       PORTC = 0b10111111 ;
		       PORTD = 0b11111010 ;
		       _delay_ms(1);
		       
		       PORTA = 0b00000000 ;
		       PORTB = 0b00000001 ;
		       PORTC = 0b10111111 ;
		       PORTD = 0b11111010 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00000010 ;
		       PORTC = 0b11011111 ;
		       PORTD = 0b11110110 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00000100 ;
		       PORTC = 0b01011111 ;
		       PORTD = 0b11110100 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00001000 ;
		       PORTC = 0b01111111 ;
		       PORTD = 0b11111101 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00010000 ;
		       PORTC = 0b10111111 ;
		       PORTD = 0b11111101 ;
		       _delay_ms(1);
		       
		       PORTB = 0b00100000 ;
		       PORTC = 0b10111111 ;
		       PORTD = 0b11111101 ;
		       _delay_ms(1);
		       
		       PORTB = 0b01000000 ;
		       PORTC = 0b11011111 ;
		       PORTD = 0b11111101 ;
		       _delay_ms(1);
		       
		       PORTB = 0b10000000 ;
		       PORTC = 0b11011111 ;
		       PORTD = 0b11111101 ;
		       _delay_ms(1);
		       
		       
	       }
		   
		   
    //  stickman siting frame  (First frame )
    
    for (int i = 0 ; i < 32 ; i++)
    
    
    {
	    
	    
	    PORTA = 0b00000001 ;
	    PORTE = 0b11000111 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000010 ;
	    PORTE = 0b10111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000100 ;
	    PORTE = 0b10111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00001000 ;
	    PORTE = 0b10111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00010000 ;
	    PORTE = 0b11000111 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00100000 ;
	    PORTE = 0b11101111 ;
	    _delay_ms(1);
	    
	    PORTA = 0b01000000 ;
	    PORTE = 0b11000011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b10000000 ;
	    PORTE = 0b01001101 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000000 ;
	    PORTB = 0b00000001 ;
	    PORTE = 0b01100110 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000001 ;
	    PORTE = 0b01100110 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000010 ;
	    PORTE = 0b01100110 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000100 ;
	    PORTE = 0b01101111 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00001000 ;
	    PORTE = 0b00000111 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00010000 ;
	    PORTE = 0b00011011 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00100000 ;
	    PORTE = 0b11001011 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b01000000 ;
	    PORTE = 0b11010101 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b10000000 ;
	    PORTE = 0b11010101 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
    }
    
    
    
    // stickman 2 fighter (Secend Frame )
    
    
    
    for (int j = 0 ; j < 32 ; j++)
    {
	    
	    
	    
	    
	    PORTF = 0b11111111 ;
	    PORTB = 0b00000000 ;
	    PORTE = 0b11111111 ;
	    PORTA = 0b00000001 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111100 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000010 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000100 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00001000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00010000 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111100 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00100000 ;
	    PORTC = 0b11111111 ;
	    PORTD = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTA = 0b01000000 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111100 ;
	    _delay_ms(1);
	    
	    PORTA = 0b10000000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111010 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000000 ;
	    PORTB = 0b00000001 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111010 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000010 ;
	    PORTC = 0b11011111 ;
	    PORTD = 0b11110110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000100 ;
	    PORTC = 0b01011111 ;
	    PORTD = 0b11110100 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00001000 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00010000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00100000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b01000000 ;
	    PORTC = 0b11011111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b10000000 ;
	    PORTC = 0b11011111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    
    }		   
	   
	   
    //  stickman siting frame  (First frame )
    
    for (int i = 0 ; i < 13 ; i++)
    
    
    {
	    
	    
	    PORTA = 0b00000001 ;
	    PORTE = 0b11000111 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000010 ;
	    PORTE = 0b10111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000100 ;
	    PORTE = 0b10111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00001000 ;
	    PORTE = 0b10111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00010000 ;
	    PORTE = 0b11000111 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00100000 ;
	    PORTE = 0b11101111 ;
	    _delay_ms(1);
	    
	    PORTA = 0b01000000 ;
	    PORTE = 0b11000011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b10000000 ;
	    PORTE = 0b01001101 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000000 ;
	    PORTB = 0b00000001 ;
	    PORTE = 0b01100110 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000001 ;
	    PORTE = 0b01100110 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000010 ;
	    PORTE = 0b01100110 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000100 ;
	    PORTE = 0b01101111 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00001000 ;
	    PORTE = 0b00000111 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00010000 ;
	    PORTE = 0b00011011 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00100000 ;
	    PORTE = 0b11001011 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b01000000 ;
	    PORTE = 0b11010101 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b10000000 ;
	    PORTE = 0b11010101 ;
	    PORTF = 0b11111110 ;
	    _delay_ms(1);
	    
    }
    
    
    
    // stickman 2 fighter (Secend Frame )
    
    
    
    for (int j = 0 ; j < 13 ; j++)
    {
	    
	    
	    
	    
	    PORTF = 0b11111111 ;
	    PORTB = 0b00000000 ;
	    PORTE = 0b11111111 ;
	    PORTA = 0b00000001 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111100 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000010 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000100 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00001000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111011 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00010000 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111100 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00100000 ;
	    PORTC = 0b11111111 ;
	    PORTD = 0b11111110 ;
	    _delay_ms(1);
	    
	    PORTA = 0b01000000 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111100 ;
	    _delay_ms(1);
	    
	    PORTA = 0b10000000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111010 ;
	    _delay_ms(1);
	    
	    PORTA = 0b00000000 ;
	    PORTB = 0b00000001 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111010 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000010 ;
	    PORTC = 0b11011111 ;
	    PORTD = 0b11110110 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00000100 ;
	    PORTC = 0b01011111 ;
	    PORTD = 0b11110100 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00001000 ;
	    PORTC = 0b01111111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00010000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b00100000 ;
	    PORTC = 0b10111111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b01000000 ;
	    PORTC = 0b11011111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    PORTB = 0b10000000 ;
	    PORTC = 0b11011111 ;
	    PORTD = 0b11111101 ;
	    _delay_ms(1);
	    
	    
    }	   
	   
	   // standing up ( 4th frame )
		
 		 
		  
		for (int y = 0 ; y < 125 ; y++ )
		
		{
			
			
			
			  
	  		PORTA = 0b00000001 ;
	  		PORTC = 0b11100011 ;
	  		PORTF = 0b11111110 ;
	  		PORTB = 0b00000000 ;
	  		PORTD = 0b11111111 ;
	  		PORTE = 0b00111111 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b00000010 ;
	  		PORTC = 0b11011101 ;
	  		PORTE = 0b11011111 ;			  
	  		PORTF = 0b11111101 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b00000100 ;
	  		PORTC = 0b11011101 ;
	  		PORTE = 0b11011111 ;
	  		PORTF = 0b11111101 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b00001000 ;
	  		PORTC = 0b11011101 ;
	  		PORTE = 0b11011111 ;
	  		PORTF = 0b11111101 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b00010000 ;
	  		PORTC = 0b11100011 ;
			PORTE = 0b00111111 ;  
	  		PORTF = 0b11111110 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b00100000 ;
	  		PORTC = 0b11111111 ;
			PORTE = 0b01111111 ;  
	  		PORTF = 0b11111111 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b01000000 ;
	  		PORTC = 0b11100011 ;
			PORTE = 0b00111111 ; 			  
	  		PORTF = 0b11111110 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b10000000 ;
	  		PORTC = 0b11010101 ;
	  		PORTE = 0b01011111 ;
	  		PORTF = 0b00111101 ;
	  		_delay_ms(1);
	  		
	  		PORTA = 0b00000000 ;
	  		PORTB = 0b00000001 ;
	  		PORTC = 0b11010101 ;
	  		PORTE = 0b01101111 ;
	  		PORTF = 0b00111011 ;
	  		_delay_ms(1);
	  		
	  		PORTB = 0b00000010 ;
	  		PORTC = 0b10110110 ;
	  		PORTE = 0b01101111 ;
	  		PORTF = 0b00111011 ;
	  		_delay_ms(1);
	  		
	  		PORTB = 0b00000100 ;
	  		PORTC = 0b10110110 ;
	  		PORTE = 0b01101111 ;
	  		PORTF = 0b00111011 ;
	  		_delay_ms(1);
	  		
	  		PORTB = 0b00001000 ;
	  		PORTC = 0b11101011 ;
			PORTE = 0b00111111 ; 
	  		PORTF = 0b00001110 ;
	  		_delay_ms(1);
	  		
	  		PORTB = 0b00010000 ;
	  		PORTC = 0b11011101 ;
	  		PORTE = 0b10111111 ;
	  		PORTF = 0b00001110 ;
	  		_delay_ms(1);
	  		
	  		PORTB = 0b00100000 ;
	  		PORTC = 0b11011101 ;
			PORTE = 0b10111111 ; 
	  		PORTF = 0b01101110 ;
	  		_delay_ms(1);
	  		
	  		PORTB = 0b01000000 ;
	  		PORTC = 0b10111110 ;
			PORTE = 0b10111111 ;
			PORTF = 0b01101110 ;
			_delay_ms(1);
	  		
	  		PORTB = 0b10000000 ;
	  		PORTC = 0b10111110 ;
			PORTE = 0b10111111 ;
			PORTF = 0b01101110 ;
			_delay_ms(1);
	  
		}
	  
	  

		
    }
	return 0 ;
}

