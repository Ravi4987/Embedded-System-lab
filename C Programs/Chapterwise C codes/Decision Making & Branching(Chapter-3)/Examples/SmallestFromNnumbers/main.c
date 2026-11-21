/****************Program to read N numbers and find smallest among them without using any loop method and array**************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
		int N,small,value,I=0;
	
		printf("Enter the number upto which you want to find Smallest:");
		scanf("%d",&N);
	
		printf("Enter the number:");
        scanf("%d",&value);
        
        small=value;
		I++;
		
		   
	
		
Start:	 if(N==I)  goto End;	

         printf("Enter the next value:");
         scanf("%d",&value);
         I++;
         
         if(value<small)  small=value;
         
         if(I<N)  goto Start;
         
End:     printf("Small value is %d",small);
		 	
	
	
		
}
