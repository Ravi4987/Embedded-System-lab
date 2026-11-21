/*********************************************************Enum************************************************************************/
#include <stdio.h>
#include <stdlib.h>

enum Bool { True=1,False=0				// Inside you can assign the value otherwise integer value assigned in increasing order starting from 0 for ex True=0, False=1
};										// We can take variable later as structure

enum days {Mon,Tue,Wed,Thur,Fri,Sat,Sun
}Weekday;								// You can define the variable with enum declaration also

typedef enum {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec 
}Month;									// Enum with typedef

int main() {
	
enum Bool flag=True;					// Value assigning to enum data type same as structure 
	flag=True;
	
	if(flag==1)
	{
		
		printf("\nFlag is %d\n",flag);
		
	}
	
enum days Weekday=Mon;

   printf("\nWeekday is %d\n",Weekday);
	
Month monthname=Apr;					// when we use enum with typedef it is easy to declare variable

	printf("\nMonth no is %d\n",monthname+1);	
	
	
	
	
	return 0;
}
