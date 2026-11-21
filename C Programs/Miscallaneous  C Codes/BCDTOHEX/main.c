/***************************************************Program to convert bcd to hex****************************************************************/
#include <stdio.h>
#include <stdlib.h>


int arraytohex(int *sour,int nob)

{   int tenmul,hexnum=0,i;
	
	sour += nob-1;
	
	for(i=0;i<nob;i++)
	{
		
		if(i==0)  tenmul=1;
		else   tenmul *= tenmul*10;
		hexnum += (*sour)*tenmul;
		
		sour--;
		
	}
	
	
	return hexnum;
	
	
}




int main() {
	int arr[2]={1,2};
	int number;
	
	number=arraytohex(arr,2);
	
	printf("Number:%d in decimal\n",number);
	printf("Number:%x in Hex",number);
	
	
	
	return 0;
}
