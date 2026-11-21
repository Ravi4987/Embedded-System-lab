#include <iostream>

using namespace std;


class CircularQueue{
 private:
 	int size;
	int front;
	int rear;
	int *Q;
 public:
 	CircularQueue();
	CircularQueue(int size);
	~CircularQueue();
	void enqueue(int x);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void display();	
};


CircularQueue::CircularQueue()
{
	front =  rear = 0;
	size = 10;
	Q = new int[size];
}

CircularQueue::CircularQueue(int size)
{
	front =  rear = 0;
	this->size = size;
	Q = new int[size];
}

CircularQueue::~CircularQueue()
{
	delete [] Q;
}

void CircularQueue::enqueue(int x)
{
	if(front == ((rear + 1)%size))
	{
		cout << "Queue is full" << endl;
	}
	else
	{
		rear = (rear + 1)%size;
		Q[rear] = x;
	}
}

int CircularQueue::dequeue()
{
	int x = -1;
	
	if(rear == front)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		front = (front + 1)%size;
		x = Q[front];
	}
	
	return x;
}

void CircularQueue::display()
{
	int i = front + 1;
	do {
        cout << Q[i] << flush;
        if (i < rear) {
            cout << " <- " << flush;
        }
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
    
    
	cout << endl;
}

bool CircularQueue::isEmpty()
{
	return (rear == front);
}

bool CircularQueue::isFull()
{
	return (front == ((rear + 1)%size));
}

int main(int argc, char** argv) {
	int A[] = {1, 3, 5, 7, 9};
 
    CircularQueue cq(sizeof(A)/sizeof(A[0]) + 1);
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.enqueue(A[i]);
    }
 
    // Display
    cq.display();
    cout << endl;
 
    // Overflow
    cq.enqueue(10);
 
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.dequeue();
    }
 
    // Underflow
    cq.dequeue();
	
	
	
	return 0;
}
