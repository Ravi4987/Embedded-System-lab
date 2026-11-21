/*******************************************************Program to study bitwise operation*********************************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	int a=1,b=2;
	
	/*
	    X-OR operation is 
	    
	    a=  0001
	    b=  0010
	    
	   a^b= 0011    (3)
	
	*/
	
	printf("a^b x-or operation is %d\n",a^b);
	
	/*
	   AND operation is
	   
	   a= 0001
	   b= 0010
	   
	  a&b=0000   (0)
	
	*/
	
	
	printf("a&b And operation is %d\n",a&b);
	
	
	/*
	   OR operation is
	   
	   a= 0001
	   b= 0010
	   
	  a|b=0011    (3)
	
	*/
	
	
	
	printf("a|b OR operation is %d\n",a|b);
	
	/*
	   Left shift
	   
	   a= 0001
	   b= 0010
	   
	a<<b= 0100   (4)
	
	*/
	
	
	printf("a<<b Left shift operation is %d\n",a<<b);
	
	
	
	/*
	   Right shift operation
	   
	   a= 0001
	   b= 0010
	   
	 a<<b= 0000   (0)
	
	
	*/
	
	
	printf("a>>b Right shift operation is %d\n",a>>b);
	
	/*
	    Not operation
	    As int a is 16  bit integer hence 
	    a= 0000 0000 0000 0001
	  ~a = 1111 1111 1111 1110  answer will be -2 
	
	*/
	
	
	printf("~a Not operation is %d\n",~a);
	
	
	
	return 0;
}
