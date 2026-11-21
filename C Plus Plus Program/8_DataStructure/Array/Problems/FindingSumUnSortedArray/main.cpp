#include <iostream>
#include <string.h>


#define SUM  10

struct Array
{
	int A[10];
	int size;
	int length;
};

int getlargestElem(struct Array arr)
{
	int l = arr.A[0];
	
	for(int i =1 ;i<arr.length;i++)
	{
		if(l<arr.A[i])
		{
			l = arr.A[i];
		}
	}
	
	return l;
}


void findSumELemUsingHash(struct Array arr)
{
	int hash_size = getlargestElem(arr);
	
	int *H = new int [hash_size];
	
	if(H!=NULL)
	{
		//memset(H,0,hash_size);
		for(int i=0;i<hash_size;i++)
			H[i] = 0;
		
		for(int i=0;i<hash_size;i++)
		{
			if(H[SUM-arr.A[i]]!=0)
			{
				printf("Sum of %d and %d element is %d\r\n",arr.A[i],SUM-arr.A[i],SUM);
			}
			
			H[arr.A[i]]++;
		}
	}
	else
	{
		printf("Failed to get memory for hash table\r\n");
	}
	
}


void findSum(struct Array arr)
{
	int i,j;
	
	
	for(i=0;i<arr.length-1;i++)
	{
		
		for(j=i+1;j<arr.length;j++)
		{
			if(arr.A[i]+arr.A[j]==SUM)
			{
				printf("Sum of %d and %d element is %d\r\n",i,j,SUM);	
			}	
		}	
		
	}
	
}

int main(int argc, char** argv) {
	
	struct Array arr1={{6,3,8,10,16,7,5,2,9},10,9};
	
	findSum(arr1);
	
	printf("\r\nUsing Hash method\r\n");
	
	findSumELemUsingHash(arr1);
	
	return 0;
}
