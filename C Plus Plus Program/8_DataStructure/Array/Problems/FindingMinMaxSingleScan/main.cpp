#include <iostream>
#include <string.h>


#define SUM  10

struct Array
{
	int A[10];
	int size;
	int length;
};




void findMinMax(struct Array arr)
{
	int Min,Max,i;
	
	Min= Max = arr.A[0];
	
	
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]<Min)
			Min = arr.A[i];
		else if(arr.A[i]>Max)
			Max  = arr.A[i];	
	}
	
	printf("Min:%d Max:%d\r\n",Min,Max);
	
}

int main(int argc, char** argv) {
	
	struct Array arr1={{6,3,8,10,16,7,5,2,9},10,9};
	
	findMinMax(arr1);
	
	return 0;
}
