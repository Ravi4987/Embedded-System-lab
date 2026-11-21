/*****************************Program to find number of days in a month of year(Use of Switch statement)*****************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int month,days,year,invalid=0;
	
	printf("Enter the month(1-12) and year:");
	scanf("%d%d",&month,&year);
	
	switch(month)
	{
		
		case 1:					/// We can use of multiple cases for one statement 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
						days=31;
						break;
		case 4:
		case 6:
		case 9:
		case 11:
						days=30;
						break;
		case 2:
						if(year%4==0)  days=29;
						else days=28;
						break;
		default:
		      invalid=1;	
	
	}
	
	if(invalid=1)  printf("Invalid month");
	
	else printf("Number of days are : %d",days);
	
	
	
	return 0;
}
