#include <iostream>

using namespace std;


class DEQueue{
 private:
 	int size;
	int front;
	int rear;
	int *Q;
 public:
 	DEQueue();
	DEQueue(int size);
	~DEQueue();
	void enqueueRear(int x);
	void enqueueFront(int x);
	int dequeueFront();
	int dequeueRear();
	bool isEmpty();
	bool isFull();
	void display();	
};


DEQueue::DEQueue()
{
	front =  rear = -1;
	size = 10;
	Q = new int[size];
}

DEQueue::DEQueue(int size)
{
	front =  rear = -1;
	this->size = size;
	Q = new int[size];
}

DEQueue::~DEQueue()
{
	delete [] Q;
}

void DEQueue::enqueueRear(int x)
{
	if(rear == size-1)
	{
		cout << "No space at rear to insert a element" << endl;
	}
	else
	{
		rear++;
		Q[rear] = x;
	}
}

void DEQueue::enqueueFront(int x)
{
	if(front == -1)
	{
		cout << "No space at front to insert a element" << endl;
	}
	else
	{
		front--;
		Q[front] = x;
	}
}

int DEQueue::dequeueFront()
{
	int x = -1;
	
	if(rear == front)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		front++;
		x = Q[front];
	}
	
	return x;
}

int DEQueue::dequeueRear()
{
	int x = -1;
	
	if(rear == -1)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		rear--;
		x = Q[front];
	}
	
	return x;
}

void DEQueue::display()
{
	for(int i = front+1;i<=rear;i++)
	{
		cout << Q[i] << flush;
		if (i < rear){
            cout << " <- " << flush;
        }
	}
	
	cout << endl;
}

bool DEQueue::isEmpty()
{
	return (rear == front);
}

bool DEQueue::isFull()
{
	return (rear == size-1);
}

int main(int argc, char** argv) {
	int A[] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8};
 
    DEQueue deq(sizeof(A)/sizeof(A[0]));
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        deq.enqueueRear(A[i]);
    }
    deq.display();
    deq.enqueueRear(11);
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        deq.dequeueFront();
    }
    deq.dequeueFront();
 
    cout << endl;
 
    for (int i=0; i<sizeof(B)/sizeof(B[0]); i++){
        deq.enqueueFront(B[i]);
    }
    deq.display();
    deq.enqueueFront(10);
    deq.enqueueFront(12);
 
    for (int i=0; i<sizeof(B)/sizeof(B[0]); i++){
        deq.dequeueRear();
    }
    deq.display();
    deq.dequeueRear();
    deq.dequeueRear();
	
	
	return 0;
}
