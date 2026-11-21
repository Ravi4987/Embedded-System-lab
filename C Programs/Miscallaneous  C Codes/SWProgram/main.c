/******************************************************************************
Program to read switch input using 1 byte variable
Online compiler : GDB Online 
https://www.onlinegdb.com/
*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <conio.h>
#include <stdlib.h>

#define DEBUG_LOG		(1)


#define COUNT_MAX       (3) 

typedef struct{
  uint8_t prevSWState:2;
  uint8_t currSWState:2;
  uint8_t counter:4;		
}swBits_t;

typedef union{
    
  swBits_t swBits;
  uint8_t swInfo;
}uSWData_t;

uSWData_t swData;     // 1 byte variable to store switch data 
                   // Bits(0-1)--> Previous switch state 
                   // Bits(2-3)--> Current switch state
                   // Bits(4-7)--> Counter Value
                   
/************************************************************
 *   Bit1    Bit2      Counter          Button
 *   0        0         >COUNT_MAX      Switch 1 is pressed
 *   0        1         >COUNT_MAX      Switch 3 is pressed
 *   1        0         >COUNT_MAX      Switch 2 is pressed
 *   1        1         >COUNT_MAX      Switch 4 is pressed
 * **********************************************************/
 
char sw; // In microcontroller it will be a pointer initialized with GPIO register address
            // To test this code I have taken sw varible to read switch input
            
void timerISR();
void delay(void);
void printSWValue();

int main()
{
    
    while(1)
    {
    	timerISR() ;      
    	printSWValue();
    	
    	delay();
	}
	
    return 0;
}


void delay(void)
{
    int c, d;
   
   for (c = 1; c <= 3000; c++)
       for (d = 1; d <= 3000; d++)
       {}
}



void timerISR()  // Lets assume this is timer ISR executing at every 10ms
{
    printf("Enter switch value:");
    scanf("%c",&sw);
    
    int ch;
    while((ch = getchar()) != '\n');
    
    
    if(swData.swBits.counter > (COUNT_MAX + 1))
    {
        swData.swBits.counter = COUNT_MAX;
    }
    else
    {
        swData.swBits.counter++;
    }
    
    
    switch(sw)
    {
        case '1':
        swData.swBits.currSWState = 0;
        //printf("SW1\r\n");
         break;
         
        case '2':
        swData.swBits.currSWState = 1;
        //printf("SW2\r\n");
         break;
         
        case '3':
        swData.swBits.currSWState = 2;
        //printf("SW3\r\n");
         break;
         
        case '4':
        swData.swBits.currSWState = 3;
        //printf("SW4\r\n");
         break;
        
        
        default:
			swData.swInfo = 0;  // if no is pressed or invalid input
			printf("Invalid input\r\n");
        break;
    }
    
    if(swData.swBits.counter == 1)
    {
      swData.swBits.prevSWState = swData.swBits.currSWState; 
     // printf("First press prevSWState:%u currSWState:%u\r\n",swData.swBits.prevSWState,swData.swBits.currSWState);  
    }
    else if((swData.swBits.prevSWState!= swData.swBits.currSWState) && (swData.swBits.counter > 0))
    {
        swData.swInfo = 0;
        printf("Different press prevSWState:%u currSWState:%u\r\n",swData.swBits.prevSWState,swData.swBits.currSWState);
    }
    else
    {
    //	printf("prevSWState:%u currSWState:%u counter:%u\r\n",swData.swBits.prevSWState,swData.swBits.currSWState,swData.swBits.counter);
	}
}

void printSWValue()
{
    if((swData.swBits.prevSWState == swData.swBits.currSWState) && (swData.swBits.counter == COUNT_MAX))
    {
        switch(swData.swBits.currSWState)
        {
           case 0:
            printf("Switch 1 is pressed\r\n");
             break;
             
            case 1:
             printf("Switch 2 is pressed\r\n");
             break;
             
            case 2:
             printf("Switch 3 is pressed\r\n");
             break;
             
            case 3:
             printf("Switch 4 is pressed\r\n");
             break; 
             
           default:
           	swData.swInfo = 0;
           	break;
        }
        
        swData.swInfo = 0;  // clear all previous values reset the variable
	}

}
