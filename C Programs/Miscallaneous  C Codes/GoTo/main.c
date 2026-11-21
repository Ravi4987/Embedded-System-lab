/****************************************Program to find root using go to statment**********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
	
	int i=0;
	float result;
	
start:	printf("Enter number:");  /// Start lable
	    scanf("%d",&i);
	
		if(i<0)  goto start;        /// here program goes to start label
	
		else
		{
			goto root;             // here program goes to root label
			print("it will not print");  /// this statement will not execute because control is transferred at root label
		}
	
root:  	
	    result=sqrt(i);
		printf("Square root is %f\n",result);
	
		return 0;
}
