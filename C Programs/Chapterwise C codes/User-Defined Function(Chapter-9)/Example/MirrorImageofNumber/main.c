/*************************************************Mirror image of number using fucntion********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	int num;


	printf("Enter number:");
	scanf("%d",&num);
	
	
	printf("Mirror image is %d",mirror(num));
		
	return 0;
}


mirror(int n)
{
	int rno=0,rem,quot;
	
	
	while(n!=0)
	{
		rem=n%10;
		
		n=n/10;
		
		rno = rno*10 + rem;
		
		
		
	}
	
	return(rno);
	
	
	
	
}
