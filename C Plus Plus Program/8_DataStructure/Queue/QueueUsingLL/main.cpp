#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};


class Queue{
 private:
 	Node* front;
    Node* rear;
 public:
 	Queue();
	~Queue();
	void enqueue(int x);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void display();	
};


Queue::Queue()
{
	front =  rear = NULL;
}

Queue::~Queue()
{
  Node *t = front;
  
  while(t->next != NULL)
  {
  	  front = front->next;
  	  delete t;
  	  t = front;
  }
}

void Queue::enqueue(int x)
{
	Node *t = new Node;
	
	if(t == NULL)
	{
		cout << "Queue is full" << endl;
	}
	else
	{
		t->data = x;
		t->next = NULL;
		
		if(front == NULL)
		{
			front = rear = t;
		}
		else
		{
			rear->next = t;
			rear = t;
			
		}
	}
}

int Queue::dequeue()
{
	Node *t;
	int x;
	
	if(NULL == front)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		t= front;
		x = t->data;
		front = front->next;
		delete t;
	}
	
	return x;
}

void Queue::display()
{
	Node *t = front;
	while(t != NULL)
	{
		cout << t->data << flush;
		t = t->next;
		if (t != NULL){
            cout << " <- " << flush;
        }
	}
	
	cout << endl;
}

bool Queue::isEmpty()
{
	return (NULL == front);
}

bool Queue::isFull()
{
	Node *t = new Node;
	
	if(t== NULL)
	{
		return true;
	}
	else
	{
		delete t;
		return false;
	}
}

int main(int argc, char** argv) {
    
     Queue q;
     
     q.enqueue(1);
     q.enqueue(3);
     q.enqueue(5);
     q.enqueue(7);
     q.enqueue(9);
 
    // Display
    q.display();
 
 
    // Dequeue
     q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	q.dequeue();    
 
    // Underflow
    q.dequeue();
	
	
	
	return 0;
}
