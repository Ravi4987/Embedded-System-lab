#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};
 

class Stack{
	private:
		Node *top;
	public:
		Stack();
		~Stack();
		void push(int x);
		int pop();
		int peek(int index);
		int isFull(void);
		int isEmpty(void);
		void display();
		int stackTop();
};


Stack::Stack()
{
	top = NULL;
}

Stack::~Stack()
{
	Node *p = top;
	
	while(p != NULL)
	{
		top = top->next;
		delete p;
		p = top;
	}
}

void Stack::push(int x)
{
	Node *t;
	t = new Node;
	
	if(t == NULL)
	{
		cout << "Stack Overflow" << endl;
	}
	else
	{
	   t->data = x;
	   t->next = top;
	   top = t;
	}
}

int Stack::pop()
{
	int x = -1;
	if(top == NULL)
	{
			cout << "Stack Underflowflow" << endl;	
			x=-1;	
	}
	else
	{
		Node *t = top;
		top = top->next;
		x = t->data;
		delete t;
	}
	
	return x;
}

int Stack::peek(int index)
{
	int x = -1;
	Node *p;
	
	if(isEmpty() == 1)
	{
		x = -1;
	}
	else
	{
		p = top;
		for(int i=0;i<index-1 && (p != NULL);i++)
		{
			p = p->next;
		}
		
		if(p != NULL)
		{
			x=  p->data;
		}
		else
		{
			x = -1;
		}
	}
	
	return x;
}

int Stack::isFull()
{
	Node *t = new Node;
	
	if(t==NULL)
	{
		return 1;
	}
	else
	{
		delete t;
		return 0;
	}
}

int Stack::isEmpty()
{
	return (top == NULL)?1:0;
}

void Stack::display()
{
	Node *p = top;
	while(p != NULL)
	{
		
		cout << p->data << " | " << flush;	
		p = p->next;
	}
	
	cout << endl;
}

int Stack::stackTop() {
	
    if (isEmpty()){
        return -1;
    }
    
    return top->data;
} 

int main(int argc, char** argv) {
	
	Stack stack;
	
	stack.push(10);
	stack.push(1);
	stack.push(9);
	stack.push(23);
	stack.push(20);
	
	
	// Display stack;
    cout << "Stack: " << flush;
    stack.display();
    
    cout << "isStackFull: " << stack.isFull() << endl;
    
    cout << "Peek at 2nd " << stack.peek(2) << endl;
    
    stack.pop();
    stack.pop();
    
    cout << "After removing top 2 element Stack: " << flush;
    stack.display();
    
    cout << "Top: " << stack.stackTop() << endl;
    
    cout << "IsStackEmpty: " << stack.isEmpty() << endl;
    cout << "isStackFull: " << stack.isFull() << endl;
    
    stack.pop();
    stack.pop();
    stack.pop();
    
    stack.pop(); // here it should throw error
    
    cout << "After removing all element IsStackEmpty: " << stack.isEmpty() << endl;
	
	
	return 0;
}
