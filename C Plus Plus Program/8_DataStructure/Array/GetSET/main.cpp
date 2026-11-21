#include <iostream>
#include<stdio.h>

struct Array
{
 int A[10];
 int size;
 int length;
};

void Display(struct Array arr)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
}

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

int Get(struct Array arr,int index)
{
 if(index>=0 && index<arr.length)
 return arr.A[index];
 return -1;
}


void Set(struct Array *arr,int index,int x)
{
 if(index>=0 && index<arr->length)
 arr->A[index]=x;
}


int Max(struct Array arr)
{
 int max=arr.A[0];
 int i;
 for(i=1;i<arr.length;i++)
 {
 if(arr.A[i]>max)
 max=arr.A[i];
 }
 return max;
}


int Min(struct Array arr)
{
	 int min=arr.A[0];
	 int i;
	 for(i=1;i<arr.length;i++)
	 {
	 if(arr.A[i]<min)
	 min=arr.A[i];
	 }
	 return min;
}


int Sum(struct Array arr)
{
	 int s=0;
	 int i;
	 for(i=0;i<arr.length;i++)
	 s+=arr.A[i];
	 return s;
}

int rSum(struct Array arr,int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
	   return rSum(arr,n-1)+arr.A[n];	
	}
}


float Avg(struct Array arr)
{
  return (float)Sum(arr)/arr.length;
}

int main()
{
	 struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
	 printf("3rd Elements is %d\r\n",Get(arr1,3));
	 printf("2nd Element is set to 2\r\n");
	 Set(&arr1,2,2);
	 printf("2rd Elements is %d\r\n",Get(arr1,2));
	 printf("Max of Array is %d\r\n",Max(arr1));
	 printf("Min of Array is %d\r\n",Min(arr1));
	 printf("Sum:%d\r\n",Sum(arr1));
	 printf("Sum of Array using Recursion:%d\r\n",rSum(arr1,arr1.size-1));
	 printf("Avg of Array is %f\r\n",Avg(arr1));
	 Display(arr1);
	 return 0;
}
