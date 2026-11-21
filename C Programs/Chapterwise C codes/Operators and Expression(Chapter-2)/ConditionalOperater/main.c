#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int x=20,y=10,m=0;
	
	int a=50,b=60;
	
	/*
	  m=(x>y)?a:b;
	  
	  is equiavalent to
	  
	  if(x>y)  m=a;
	  
	  else  m=b;
	*/
	
	m=(x>y)?a:b;
	
	printf("Greater number is %d",m);
	
	
	
	return 0;
}
