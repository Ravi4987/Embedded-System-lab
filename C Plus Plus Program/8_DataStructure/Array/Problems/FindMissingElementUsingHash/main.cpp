#include <iostream>
#include <stdlib.h>
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

int main(int argc, char** argv) {
	int hash_size =0 ;
	int *H;
	
	struct Array arr1={{2,3,4,6,7,8,9,10,11},10,9};
	
	hash_size = getlargestElem(arr1);
	
	H = (int *)malloc(hash_size);
	
	if(H!=NULL)
	{
		memset(H,0,hash_size);
		
		for(int i=0;i<arr1.length;i++)
		{
			H[arr1.A[i]]++;
		}
		
		for(int i=0;i<hash_size;i++)
		{
			if(H[i]==0)
			{
				printf("Element:%d Missing\r\n",i);
			}
		}	
	}
	else
	{
		printf("Failed to get hash table memory\r\n");
	}
	
	
	
	
	return 0;
}
