#include <iostream>

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{
	printf("Array Elements are\n");
	for(int i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void Append(struct Array *arr, int x)
{
	if(arr->length<arr->size)
	{
		arr->A[arr->length]=x;
		arr->length++;
	}
}

void Insert(struct Array *arr,int index, int x)
{
	if(index>=0 && index<= arr->length)
	{
		for(int i=arr->length;i<index;i--)
		{
			arr->A[i] = arr->A[i-1];
		}
		arr->A[index] = x;
		arr->length++;
	}
}

int main(int argc, char** argv) {
	
	struct Array arr1={{2,3,4,5,6},10,5};
	Append(&arr1,10);
	Insert(&arr1,0,12);
	Display(arr1);
	
	return 0;
}
