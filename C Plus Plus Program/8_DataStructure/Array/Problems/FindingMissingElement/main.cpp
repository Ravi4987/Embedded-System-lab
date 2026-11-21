/*Finding missing element in an array where each element is arranged in sequencial manner (diff between two consecutive element remain same)*/
#include <iostream>

using namespace std;

class Array
{
	private:
		int *A;
		int size;
		int length;
	public:
		Array()
		{
			A = new int[10];
			size = 10;
			length = 0;
		}
		
		Array(int size)
		{
			A = new int[size];
			this->size = 10;
			length = 0;
		}
		~Array()
		{
			delete []A;
		}
	
	void display();
	void Insert(int index, int x);
	void findMissingElement();
};


void Array::display()
{
	printf("Elements are\r\n");
	for(int i=0;i<length;i++)
	 cout<<A[i]<<" ";
	 cout<<endl;
}

void Array::findMissingElement()
{
	int diff;
	
	diff = A[0];
	
	for(int i=0;i<length;i++)
	{
		if((A[i]-i)!=diff)
		{
			printf("Missing is %d\r\n",i+diff);
			return; 
		}
	}
	printf("No missing element found\r\n");
}

void Array::Insert(int index,int x)
{
	if(length<size)
	{
		A[index]=x;
		length++;
	}
	else
	{
		printf("Memory is not sufficient");
	}
}

int main(int argc, char** argv) {
	Array arr;
	
	arr.Insert(0,1);
	arr.Insert(1,2);
	arr.Insert(2,3);
	arr.Insert(3,5);
	arr.Insert(4,5);
	
	arr.findMissingElement();
	
	return 0;
}
