#include <iostream>
#include <string.h>

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

void findDupElem(struct Array arr)
{
	int i,j;
	i=j=0;
	
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]==arr.A[i+1])
		{	
			for(j=i;j<arr.length && arr.A[j]==arr.A[i];j++){}
			
			printf("Element:%d Repeated %d times\r\n",arr.A[i],j-i);
			
			i = j;
		}	
	}	
}

void findDupELemUsingHash(struct Array arr)
{
	int hash_size = getlargestElem(arr);
	
	int *H = new int [hash_size];
	
	if(H!=NULL)
	{
		//memset(H,0,hash_size);
		for(int i=0;i<hash_size;i++)
			H[i] = 0;
		
		for(int i=0;i<arr.length;i++)
		{
			H[arr.A[i]]++;
		}
		
		for(int i=0;i<hash_size;i++)
		{
			if(H[i]>1)
			{
				printf("Element:%d Repeated:%d\r\n",i,H[i]);
			}
		}
	}
	else
	{
		printf("Failed to get memory for hash table\r\n");
	}
	
}

int main(int argc, char** argv) {
	
	struct Array arr1={{2,3,3,6,7,7,7,10,11},10,9};
	
	findDupElem(arr1);
	
	printf("\r\nUsing Hash table\r\n\r\n");
	
	findDupELemUsingHash(arr1);
	
	return 0;
}
