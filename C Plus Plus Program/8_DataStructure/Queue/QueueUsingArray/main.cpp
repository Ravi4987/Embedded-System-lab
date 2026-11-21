#include <iostream>

using namespace std;


class Queue{
 private:
 	int size;
	int front;
	int rear;
	int *Q;
 public:
 	Queue();
	Queue(int size);
	~Queue();
	void enqueue(int x);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void display();	
};


Queue::Queue()
{
	front =  rear = -1;
	size = 10;
	Q = new int[size];
}

Queue::Queue(int size)
{
	front =  rear = -1;
	this->size = size;
	Q = new int[size];
}

Queue::~Queue()
{
	delete [] Q;
}

void Queue::enqueue(int x)
{
	if(rear == size-1)
	{
		cout << "Queue is full" << endl;
	}
	else
	{
		rear++;
		Q[rear] = x;
	}
}

int Queue::dequeue()
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

void Queue::display()
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

bool Queue::isEmpty()
{
	return (rear == front);
}

bool Queue::isFull()
{
	return (rear == size-1);
}

int main(int argc, char** argv) {
	int A[] = {1, 3, 5, 7, 9};
 
    Queue q(sizeof(A)/sizeof(A[0]));
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.enqueue(A[i]);
    }
 
    // Display
    q.display();
 
    // Overflow
    q.enqueue(10);
 
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.dequeue();
    }
 
    // Underflow
    q.dequeue();
	
	
	
	return 0;
}
