#include <iostream>
#include <string.h>


#define SUM  10

struct Array
{
	int A[10];
	int size;
	int length;
};




void findSum(struct Array arr)
{
	int i,j;
	
	i=0;
	j= arr.length-1;
	
	while(i<j)
	{
		
		if(arr.A[i] + arr.A[j] == SUM)
		{
			printf("Sum of A[%d]:%d and A[%d]:%d element is %d\r\n",i,arr.A[i],j,arr.A[j],SUM);
			i++;
			j--;
		}
		else if(arr.A[i] + arr.A[j] < SUM)
		{
			i++;
		}
		else
		{
			j--;
		}
	}	
}

int main(int argc, char** argv) {
	
	struct Array arr1={{1,3,4,5,6,8,9,10,12},10,9};  // Array should be sorted
	
	findSum(arr1);
	
	return 0;
}
