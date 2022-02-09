/*

Code created by "LANKASH"
  @18/12/2021

File Contents : 'DIO' impelimentation Functions for Tiva-C

*/
 
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "tm4c123gh6pm.h"
#include <my_macros.h>  //My standard  bit macros impelimentation.
#include "DIO.h"


//..................................................................................

void DIO_set_pin_dir(unsigned char port, unsigned char pin, unsigned char direction)    //Function to set a specific pin direction 'I/P'(@direction=0) or 'O/P'(@direction=1).
{	
  switch (port)
  {
    case 'A':                     // @Port 'A'.
    case 'a':                     // @Port 'a'.
    if (1== direction)            // '1' is for 'O/P'.
    {
      SET_BIT (GPIO_PORTA_DIR_R, pin);        // Set the pin 'PIN' in port 'A' as 'O/P'.
    }
    else
    {
      CLR_BIT (GPIO_PORTA_DIR_R, pin);       // Set the pin 'PIN' in port 'A' as 'I/P'.
    } 
    break;

    case 'B':                    // @Port 'B'.
    case 'b':                    // @Port 'b'.
    if (1==direction)            // '1' is for 'O/P'.
    {
      SET_BIT (GPIO_PORTB_DIR_R, pin);       // Set the pin 'PIN' in port 'B' as 'O/P'.
    }
    else
    {
      CLR_BIT (GPIO_PORTB_DIR_R, pin);       // Set the pin 'PIN' in port 'B' as 'I/P'.
    }
    break;

    case 'C':                    // @Port 'C'.
    case 'c':                    // @Port 'c'. 
    if (1==direction)            // '1' is for 'O/P'.
    {
      SET_BIT (GPIO_PORTC_DIR_R, pin);       // Set the pin 'PIN' in port 'C' as 'O/P'. 
    }
    else
    {
      CLR_BIT (GPIO_PORTC_DIR_R, pin);       // Set the pin 'PIN' in port 'C' as 'I/P'.   
    }
    break;

    case 'D':                    // @Port 'D'.
    case 'd':                    // @Port 'd'. 
    if (1==direction)            // '1' is for 'O/P'.
    {
      SET_BIT (GPIO_PORTD_DIR_R, pin);       // Set the pin 'PIN' in port 'D' as 'O/P'. 

    }
    else
    {
      CLR_BIT (GPIO_PORTD_DIR_R, pin);       // Set the pin 'PIN' in port 'D' as 'I/P'.   
    }
    break;
  
    case 'E':                    // @Port 'D'.
    case 'e':                    // @Port 'd'. 
    if (1==direction)            // '1' is for 'O/P'.
    {
      SET_BIT (GPIO_PORTE_DIR_R, pin);       // Set the pin 'PIN' in port 'D' as 'O/P'. 
    }
    else
    {
      SET_BIT (GPIO_PORTE_DEN_R, pin);       // Set the pin 'PIN' in port '' as Digital GPIO pin.          
    }
    break;
		
    case 'F':                    // @Port 'D'.
    case 'f':                    // @Port 'd'. 
    if (1==direction)            // '1' is for 'O/P'.
    {
      SET_BIT (GPIO_PORTF_DIR_R, pin);       // Set the pin 'PIN' in port 'D' as 'O/P'.
    }
    else
    {
      CLR_BIT (GPIO_PORTF_DIR_R, pin);       // Set the pin 'PIN' in port 'D' as 'I/P'.
    }
    break;
		
    default:                     // If nothing from the above, Break.
    break;	
  }
}

//..................................................................................

void DIO_set_port_dir (unsigned char port, unsigned char direction)    //Function to set a specific pin direction 'I/P'(@Direction=0) or 'O/P'(@Direction=1).
{	
  switch (port)
  {
    case 'A':                      // @Port 'A'.
    case 'a':                      // @Port 'a'.
    if (1 == direction)
    {
      GPIO_PORTA_DIR_R = 0xFF;     // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    else
    {
    GPIO_PORTA_DIR_R = 0x00;       // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    break;

    case 'B':                      // @Port 'A'.
    case 'b':                      // @Port 'a'.
    if (1 == direction)
    {
      GPIO_PORTB_DIR_R = 0xFF;     // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    else
    {
      GPIO_PORTB_DIR_R = 0x00;       // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    break;

    case 'C':                      // @Port 'A'.
    case 'c':                      // @Port 'a'.
    if (1 == direction)
    {
      GPIO_PORTC_DIR_R = 0xFF;     // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    else
    {
      GPIO_PORTC_DIR_R = 0x00;       // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    break;
  
    case 'D':                      // @Port 'A'.
    case 'd':                      // @Port 'a'.
    if (1 == direction)
    {
      GPIO_PORTD_DIR_R = 0xFF;     // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    else
    {
      GPIO_PORTD_DIR_R = 0x00;       // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    break;

    case 'E':                      // @Port 'A'.
    case 'e':                      // @Port 'a'.
    if (1 == direction)
    {
      GPIO_PORTE_DIR_R = 0xFF;     // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    else
    {
      GPIO_PORTE_DIR_R = 0x00;       // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    break;

    case 'F':                      // @Port 'A'.
    case 'f':                      // @Port 'a'.
    if (1 == direction)
    {
      GPIO_PORTF_DIR_R = 0xFF;     // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    else
    {
      GPIO_PORTF_DIR_R = 0x00;       // Set the whole port as 'direction', (1>>'O/P') or (0>>'I/P').    
    }
    break;
  
    default:                     // If nothing from the above, Break.
    break;
  }
}

//..................................................................................

void DIO_set_digital_pin (unsigned char port, unsigned char pin)
{
    switch (port)
    {
      case 'A':
      case 'a':
        SET_BIT (GPIO_PORTA_DEN_R, pin);         // Set 'pin' in Port 'A' as digital.
      break;

      case 'B':
      case 'b':
        SET_BIT (GPIO_PORTB_DEN_R, pin);         // Set 'pin' in Port 'B' as digital.
      break;
 
      case 'C':
      case 'c':
        SET_BIT (GPIO_PORTC_DEN_R, pin);         // Set 'pin' in Port 'C' as digital.
      break;
 
      case 'D':
      case 'd':
        SET_BIT (GPIO_PORTD_DEN_R, pin);         // Set 'pin' in Port 'D' as digital.
      break;
 
      case 'E':
      case 'e':
        SET_BIT (GPIO_PORTE_DEN_R, pin);         // Set 'pin' in Port 'E' as digital.
      break;
 
      case 'F':
      case 'f':
        SET_BIT (GPIO_PORTF_DEN_R, pin);         // Set 'pin' in Port 'F' as digital.
      break;
    }
	}

//..................................................................................

void DIO_set_digital_port (unsigned char port)
{
    switch (port)
    {
      case 'A':
      case 'a':
        GPIO_PORTA_DEN_R = 0xFF;                // Set Port 'A' as Digital.
      break;

      case 'B':
      case 'b':
        GPIO_PORTB_DEN_R = 0xFF;                // Set Port 'B' as Digital.
      break;
 
      case 'C':
      case 'c':
        GPIO_PORTC_DEN_R = 0xFF;                // Set Port 'C' as Digital.
      break;
 
      case 'D':
      case 'd':
        GPIO_PORTD_DEN_R = 0xFF;                // Set Port 'D' as Digital.
      break;
 
      case 'E':
      case 'e':
        GPIO_PORTE_DEN_R = 0xFF;                // Set Port 'E' as Digital.
      break;
 
      case 'F':
      case 'f':
        GPIO_PORTF_DEN_R = 0xFF;                // Set Port 'F' as Digital.
      break;
    }
}

//..................................................................................

void DIO_write_pin (unsigned char port, unsigned char pin, unsigned char value)
{
	switch (port)
  {
    case 'A':                             // @Port 'A'.
    case 'a':                             // @Port 'a'.
    if (1 == value)
    {	 
      SET_BIT (GPIO_PORTA_DATA_R, pin);    // Write '1' on the O/P pin..
    }
    else
    {
      CLR_BIT (GPIO_PORTA_DATA_R, pin);
    }
    break;
  
    case 'B':                             // @Port 'A'.
    case 'b':                             // @Port 'a'.
    if (1 == value)
    {
      SET_BIT (GPIO_PORTB_DATA_R, pin);    // Write '1' on the O/P pin..
    }
    else 
    {
      CLR_BIT (GPIO_PORTB_DATA_R, pin);
    }
    break;
		
    case 'C':                             // @Port 'A'.
    case 'c':                             // @Port 'a'.
    if (1 == value) 
    {
      SET_BIT (GPIO_PORTC_DATA_R, pin);    // Write '1' on the O/P pin..
    }
    else
    {
      CLR_BIT (GPIO_PORTC_DATA_R, pin);
    }
    break;
		
    case 'D':                             // @Port 'A'.
    case 'd':                             // @Port 'a'.
    if (1 == value)
    {
      SET_BIT (GPIO_PORTD_DATA_R, pin);    // Write '1' on the O/P pin..
    }
    else
    {
      CLR_BIT (GPIO_PORTD_DATA_R, pin);
    }
    break;
		
    case 'E':                             // @Port 'A'.
    case 'e':                             // @Port 'a'.
    if (1 == value)
    {
       SET_BIT (GPIO_PORTE_DATA_R, pin);    // Write '1' on the O/P pin..
    }
    else
    {
      CLR_BIT (GPIO_PORTE_DATA_R, pin);
    }
    break;
		
    case 'F':                             // @Port 'A'.
    case 'f':                             // @Port 'a'.
    if (1 == value)
    {
      SET_BIT (GPIO_PORTF_DATA_R, pin);    // Write '1' on the O/P pin..
    }
    else
    {
      CLR_BIT (GPIO_PORTF_DATA_R, pin);
    }
    break;
		
    default:                      // If nothing from the above, Break.
      break;
  }
}

//..................................................................................

void DIO_write_port(unsigned char port, unsigned char value)  //Set the 'O/P' Port as 'HIGH' or 'LOW'
{
  switch (port)
  {
    case 'A':                     // @Port 'A'.
    case 'a':                     // @Port 'a'.
      GPIO_PORTA_DATA_R = value;    // Set the whole port value as 'value'.
    break;
  
    case 'B':                     // @Port 'B'.
    case 'b':                     // @Port 'b'.
      GPIO_PORTB_DATA_R = value;    // Set the whole port value as 'value'.
    break;

    case 'C':                     // @Port 'C'.
    case 'c':                     // @Port 'c'.
      GPIO_PORTC_DATA_R = value;    // Set the whole port value as 'value'.
    break;
  
    case 'D':                     // @Port 'D'.
    case 'd':                     // @Port 'd'.
      GPIO_PORTD_DATA_R = value;    // Set the whole port value as 'value'.
    break;

    case 'E':                     // @Port 'D'.
    case 'e':                     // @Port 'd'.
      GPIO_PORTE_DATA_R = value;    // Set the whole port value as 'value'.
    break;
		
    case 'F':                     // @Port 'D'.
    case 'f':                     // @Port 'd'.
      GPIO_PORTF_DATA_R = value;    // Set the whole port value as 'value'.
    break;
		
    default:                      // If nothing from the above, Break.
      break;
  }
}

//..................................................................................

unsigned char DIO_read_pin (unsigned char port, unsigned char pin)  //Read the value from 'I/P' pin
{
  volatile unsigned char value=0;
  
  switch (port)
  {
    case 'A':                                     // @Port 'A'.
    case 'a':                                     // @Port 'a'.
      value = READ_BIT(GPIO_PORTA_DATA_R, pin);   // Read the value of pin 'pin', assigned to 'value'.
    break;

    case 'B':                                     // @Port 'B'.
    case 'b':                                     // @Port 'b'.
      value = READ_BIT(GPIO_PORTB_DATA_R, pin);   // Read the value of pin 'pin', assigned to 'value'.
    break;

    case 'C':                                     // @Port 'C'.
    case 'c':                                     // @Port 'c'.
      value = READ_BIT(GPIO_PORTC_DATA_R, pin);   // Read the value of pin 'pin', assigned to 'value'.
    break;

    case 'D':                                     // @Port 'D'.
    case 'd':                                     // @Port 'd'.
      value = READ_BIT(GPIO_PORTD_DATA_R, pin);   // Read the value of pin 'pin', assigned to 'value'.
    break;
		
    case 'E':                                     // @Port 'D'.
    case 'e':                                     // @Port 'd'.
      value = READ_BIT(GPIO_PORTE_DATA_R, pin);   // Read the value of pin 'pin', assigned to 'value'.
    break;
		
    case 'F':                                     // @Port 'D'.
    case 'f':                                     // @Port 'd'.
      value = READ_BIT(GPIO_PORTF_DATA_R, pin);   // Read the value of pin 'pin', assigned to 'value'.
    break;

    default:                       // If nothing from the above, Break.
      break;
  }
  return value;
}

//..................................................................................

unsigned char DIO_read_port(unsigned char port)  //Read the value from 'I/P' port
{
  volatile unsigned char value=0;

  switch (port)
  {
    case 'A':                           // @Port 'A'.
    case 'a':                           // @Port 'a'.
      value = GPIO_PORTA_DATA_R;        // Assign the value of I/P 'PINA' register to 'value'. 
    break;

    case 'B':                           // @Port 'B'.
    case 'b':                           // @Port 'b'.
      value = GPIO_PORTB_DATA_R;        // Assign the value of I/P 'PINB' register to 'value'. 
    break;

    case 'C':                           // @Port 'C'.
    case 'c':                           // @Port 'c'.
      value = GPIO_PORTC_DATA_R;        // Assign the value of I/P 'PINC' register to 'value'. 
    break;

    case 'D':                           // @Port 'D'.
    case 'd':                           // @Port 'd'.
      value = GPIO_PORTD_DATA_R;        // Assign the value of I/P 'PIND' register to 'value'. 
    break;

    case 'E':                           // @Port 'D'.
    case 'e':                           // @Port 'd'.
      value = GPIO_PORTE_DATA_R;        // Assign the value of I/P 'PIND' register to 'value'. 
    break;
		
    case 'F':                           // @Port 'D'.
    case 'f':                           // @Port 'd'.
      value = GPIO_PORTF_DATA_R;        // Assign the value of I/P 'PIND' register to 'value'. 
    break;
		
    default:                            // If nothing from the above, Break.
      break;
  }
  return value;
}

//..................................................................................

void DIO_toogle(unsigned char port, unsigned char pin)  //Toogle the 'O/P' pin value 'HIGH' or 'LOW'
{
  switch (port)
  {
    case 'A':
    case 'a':
      TOG_BIT(GPIO_PORTA_DATA_R, pin);    //Toggle the value of the given pin in port 'A'.
    break;

    case 'B':
    case 'b':
      TOG_BIT(GPIO_PORTB_DATA_R, pin);    //Toggle the value of the given pin in port 'B'.
    break;

    case 'C':
    case 'c':
      TOG_BIT(GPIO_PORTC_DATA_R, pin);    //Toggle the value of the given pin in port 'C'.
    break;

    case 'D':
    case 'd':
      TOG_BIT(GPIO_PORTD_DATA_R, pin);    //Toggle the value of the given pin in port 'D'.
    break;
		
    case 'E':
    case 'e':
      TOG_BIT(GPIO_PORTE_DATA_R, pin);    //Toggle the value of the given pin in port 'D'.
    break;
		
    case 'F':
    case 'f':
      TOG_BIT(GPIO_PORTF_DATA_R, pin);    //Toggle the value of the given pin in port 'D'.
    break;

    default:
    break;
  }
}

//..................................................................................

void DIO_connect_pullup (unsigned char port, unsigned char pin)  //Set the pin Microcontroller's internal 'PULL-UP' connection 'ON'(@pullup=1) or 'OFF'(@pullup=0)
{
  switch (port)
  {
    case 'A':                          // @Port 'A'.
    case 'a':                          // @Port 'a'.
      SET_BIT (GPIO_PORTA_PUR_R, pin);   // Enable Internal Pull-Up Connection for 'PIN'.
    break;
  
    case 'B':                          // @Port 'B'.
    case 'b':                          // @Port 'b'.
      SET_BIT (GPIO_PORTE_PUR_R, pin);   // Enable Internal Pull-Up Connection for 'PIN'.
    break;

    case 'C':                          // @Port 'C'.
    case 'c':                          // @Port 'c'.
      SET_BIT (GPIO_PORTC_PUR_R, pin);   // Enable Internal Pull-Up Connection for 'PIN'.
    break;
  
    case 'D':                          // @Port 'D'.
    case 'd':                          // @Port 'd'.
      SET_BIT (GPIO_PORTD_PUR_R, pin);   // Enable Internal Pull-Up Connection for 'PIN'.
    break;

    case 'E':                          // @Port 'D'.
    case 'e':                          // @Port 'd'.
      SET_BIT (GPIO_PORTE_PUR_R, pin);   // Enable Internal Pull-Up Connection for 'PIN'.
    break;
		
    case 'F':                          // @Port 'D'.
    case 'f':                          // @Port 'd'.
      SET_BIT (GPIO_PORTF_PUR_R, pin);   // Enable Internal Pull-Up Connection for 'PIN'.
    break;
		
    default:                           // If nothing from the above, Break.
      break;
  }
}

//..................................................................................

void DIO_connect_pulldown (unsigned char port, unsigned char pin)    //Set the pin Microcontroller's internal 'PULL-UP' connection 'ON'(@pullup=1) or 'OFF'(@pullup=0)
{
  switch (port)
  {
    case 'A':                          // @Port 'A'.
    case 'a':                          // @Port 'a'.
      SET_BIT (GPIO_PORTA_PDR_R, pin);   // Enable Internal Pull-Down Connection for 'PIN'.
    break;
  
    case 'B':                          // @Port 'B'.
    case 'b':                          // @Port 'b'.
      SET_BIT (GPIO_PORTB_PDR_R, pin);   // Enable Internal Pull-Down Connection for 'PIN'.
    break;

    case 'C':                          // @Port 'C'.
    case 'c':                          // @Port 'c'.
      SET_BIT (GPIO_PORTC_PDR_R, pin);   // Enable Internal Pull-Down Connection for 'PIN'.
    break;
  
    case 'D':                          // @Port 'D'.
    case 'd':                          // @Port 'd'.
      SET_BIT (GPIO_PORTD_PDR_R, pin);   // Enable Internal Pull-Down Connection for 'PIN'.
    break;

    case 'E':                          // @Port 'D'.
    case 'e':                          // @Port 'd'.
      SET_BIT (GPIO_PORTE_PDR_R, pin);   // Enable Internal Pull-Down Connection for 'PIN'.
    break;
		
    case 'F':                          // @Port 'D'.
    case 'f':                          // @Port 'd'.
      SET_BIT (GPIO_PORTF_PDR_R, pin);   // Enable Internal Pull-Down Connection for 'PIN'.
    break;
		
    default:                           // If nothing from the above, Break.
      break;
  }
}

//..................................................................................

void DIO_port_enable_clk (unsigned char port)
{
    switch (port)
    {
      case 'A':
      case 'a':
        SET_BIT (SYSCTL_RCGCGPIO_R, 0);         // Set Clock Enabled to Port 'A'
      break;

      case 'B':
      case 'b':
        SET_BIT (SYSCTL_RCGCGPIO_R, 1);         // Set Clock Enabled to Port 'B'
      break;
 
      case 'C':
      case 'c':
        SET_BIT (SYSCTL_RCGCGPIO_R, 2);         // Set Clock Enabled to Port 'C'
      break;
 
      case 'D':
      case 'd':
        SET_BIT (SYSCTL_RCGCGPIO_R, 3);         // Set Clock Enabled to Port 'D'
      break;
 
      case 'E':
      case 'e':
        SET_BIT (SYSCTL_RCGCGPIO_R, 4);         // Set Clock Enabled to Port 'E'
      break;
 
      case 'F':
      case 'f':
        SET_BIT (SYSCTL_RCGCGPIO_R, 5);         // Set Clock Enabled to Port 'F'
      break;
    }
}

//..................................................................................

void DIO_unlock_port (unsigned char port)
{
  switch (port)
  {
    case 'A':                          // @Port 'A'.
    case 'a':                          // @Port 'a'.
      GPIO_PORTA_LOCK_R = 0x4C4F434B;    // Un-Lock [GPIOCR] For Port A.
    break;
  
    case 'B':                          // @Port 'B'.
    case 'b':                          // @Port 'b'.
      GPIO_PORTB_LOCK_R = 0x4C4F434B;    // Un-Lock [GPIOCR] For Port B.
    break;

    case 'C':                          // @Port 'C'.
    case 'c':                          // @Port 'c'.
      GPIO_PORTC_LOCK_R = 0x4C4F434B;    // Un-Lock [GPIOCR] For Port C.
    break;
  
    case 'D':                          // @Port 'D'.
    case 'd':                          // @Port 'd'.
      GPIO_PORTD_LOCK_R = 0x4C4F434B;    // Un-Lock [GPIOCR] For Port D.
    break;

    case 'E':                          // @Port 'D'.
    case 'e':                          // @Port 'd'.
      GPIO_PORTE_LOCK_R = 0x4C4F434B;    // Un-Lock [GPIOCR] For Port E.
    break;
		
    case 'F':                          // @Port 'D'.
    case 'f':                          // @Port 'd'.
      GPIO_PORTF_LOCK_R = 0x4C4F434B;    // Un-Lock [GPIOCR] For Port F.
    break;
		
    default:                      // If nothing from the above, Break.
      break;
  }
}

//..................................................................................

void DIO_port_enable_commit (unsigned char port)
{
  switch (port)
  {
    case 'A':                          // @Port 'A'.
    case 'a':                          // @Port 'a'.
      GPIO_PORTB_CR_R = 0xFF;          // Enable Commit For Port 'A'.
    break;
  
    case 'B':                          // @Port 'B'.
    case 'b':                          // @Port 'b'.
      GPIO_PORTB_CR_R = 0xFF;          // Enable Commit For Port 'B'.
    break;

    case 'C':                          // @Port 'C'.
    case 'c':                          // @Port 'c'.
      GPIO_PORTC_CR_R = 0xFF;          // Enable Commit For Port 'C'.
    break;
  
    case 'D':                          // @Port 'D'.
    case 'd':                          // @Port 'd'.
      GPIO_PORTD_CR_R = 0xFF;          // Enable Commit For Port 'D'.
    break;

    case 'E':                          // @Port 'D'.
    case 'e':                          // @Port 'd'.
      GPIO_PORTE_CR_R = 0xFF;          // Enable Commit For Port 'E'.
    break;
		
    case 'F':                          // @Port 'D'.
    case 'f':                          // @Port 'd'.
       GPIO_PORTF_CR_R = 0xFF;          // Enable Commit For Port 'F'.
    break;
		
    default:                      // If nothing from the above, Break.
      break;
	}		
}

//..................................................................................

void DIO_pin_commit (unsigned char port, unsigned char pin, unsigned char direction)  //Enable commit @(direction=1), Disable commit @(direction =0)
{
  switch (port)
  {
    case 'A':                      // @Port 'A'.
    case 'a':                      // @Port 'a'.
    if (1 == direction)
    {
      SET_BIT (GPIO_PORTA_CR_R, pin);       // Enable Commit for 'PIN'.    
    }
    else
    {
      SET_BIT (GPIO_PORTA_CR_R, pin);       // Disable Commit for 'PIN'.    
    }
    break;
  
    case 'B':                      // @Port 'B'.
    case 'b':                      // @Port 'b'.
    if (1 == direction)
    {
      SET_BIT (GPIO_PORTB_CR_R, pin);       // Enable Commit for 'PIN'.    
    }
    else
    {
      SET_BIT (GPIO_PORTB_CR_R, pin);       // Disable Commit for 'PIN'.    
    }
    break;

    case 'C':                      // @Port 'C'.
    case 'c':                      // @Port 'c'.
    if (1 == direction)
    {
      SET_BIT (GPIO_PORTC_CR_R, pin);       // Enable Commit for 'PIN'.    
    }
    else
    {
      SET_BIT (GPIO_PORTC_CR_R, pin);       // Disable Commit for 'PIN'.    
    }
    break;

    case 'D':                      // @Port 'D'.
    case 'd':                      // @Port 'd'.
    if (1 == direction)
    {
      SET_BIT (GPIO_PORTD_CR_R, pin);       // Enable Commit for 'PIN'.    
    }
    else
    {
      SET_BIT (GPIO_PORTD_CR_R, pin);       // Disable Commit for 'PIN'.    
    }
    break;
    
    case 'E':                      // @Port 'E'.
    case 'e':                      // @Port 'e'.
    if (1 == direction)
    {
      SET_BIT (GPIO_PORTE_CR_R, pin);       // Enable Commit for 'PIN'.    
    }
    else
    {
      SET_BIT (GPIO_PORTE_CR_R, pin);       // Disable Commit for 'PIN'.    
    }
    break;

    case 'F':                      // @Port 'F'.
    case 'f':                      // @Port 'f'.
    if (1 == direction)
    {
      SET_BIT (GPIO_PORTF_CR_R, pin);       // Enable Commit for 'PIN'.    
    }
    else
    {
      SET_BIT (GPIO_PORTF_CR_R, pin);       // Disable Commit for 'PIN'.    
    }
    break;

    default:                      // If nothing from the above, Break.
      break;
  }
}

//..................................................................................