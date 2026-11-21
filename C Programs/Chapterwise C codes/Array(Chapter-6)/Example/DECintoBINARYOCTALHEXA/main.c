/************************************Program to convert decimal number into binary, octal and hexa**********************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int r[20],dno,i, radix,j;
	char hexa[20];
	
	printf("Enter the decimal number:");
	scanf("%d",&dno);
	
	printf("Enter the radix or base of conversion:");
	scanf("%d",&radix);
	
	
	do{
		
		r[i]=dno%radix;
		
		if(r[i]>9)
		{
			
			switch(r[i])
			{
				
				case 10:
					hexa[i]='A';
					break;
					
				case 11:
					hexa[i]='B';
					break;
					
				case 12:
					hexa[i]='C';
					break;
					
				case 13:
					hexa[i]='D';
					break;
					
				case 14:
					hexa[i]='E';
					break;
					
				case 15:
					hexa[i]='F';
					break;
			
				
			}
			
			
			
			
			
		}
		
		dno=dno/radix;
			i++;
		
		
		
	}while(dno>0);
		
		printf("Equiavlent number in radix %d is :",radix);
		
		for(j=i-1;j>=0;j--)
		{
			
			if(r[j]<=9)
			printf("%d",r[j]);
			
			else
			printf("%c",hexa[j]);
			
			
		}
	
	return 0;
}
