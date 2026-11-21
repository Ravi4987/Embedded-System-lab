/*************************************************Program to calculate the premium according to individual age, living condition etc******************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int age,Premium;
	char health, living,sex;
	
	printf("Enter the age of person:");
	scanf("%d",&age);
	
	printf("Enter the Sex of Person(i.e M for Male and F for Female):");
	scanf(" %c ",&sex);
	
	printf("Enter the health condition of Person(i.e E for Excellent and P for Poor)");
	scanf(" %c ",&health);
	
	printf("Enter the living condition of Person(i.e C For City and V for Village):");
	scanf(" %c ",&living);
	
/*	printf("Enter the age of person\n");
	printf("Enter the Sex of Person(i.e M for Male and F for Female)\n");
	printf("Enter the health condition of Person(i.e E for Excellent and P for Poor)\n");
	printf("Enter the living condition of Person(i.e C For City and V for Village)\n");
	
	scanf("%d%c%c%c",&age,&sex,&health,&living);*/
	
	if(age>=25 && age<=35)
	{
		  
		switch(health)
		{
			
			case 'E' :
				if(sex=='M') 
				{
					Premium=4;
					printf("Premium is %d per thousand and Policy amount cannot exceed Rs. 2 lakh",Premium);
					
				}
				else if(sex=='F')
				{
					Premium=3;
					printf("Premium is %d per thousand and Policy amount cannot exceed Rs. 1 lakh",Premium);
					
				}
				
				else  printf("Wrong input\n");
				
				break;
				
				
			case 'P' :
				Premium=6;
				printf("Premium is %d per thousand and Policy amount cannot exceed Rs.  10,000",Premium);
			
			    break;
			    
		    default:
		    	printf("Wrong input\n");
		    	break;
		}
		
		
	}
	
	else
	{
		
		printf("Person is not insured\n");
	}
	
	
	
	//return 0;
}
