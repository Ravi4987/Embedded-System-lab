#include <iostream>

using namespace std;

class Stack{
	private:
		int size;
		int top;
		int *S;
	public:
		Stack(int size);
		~Stack();
		void push(int x);
		int pop();
		int peek(int index);
		int isFull(void);
		int isEmpty(void);
		void display();
		int stackTop();
};


Stack::Stack(int size)
{
	this->size = size;
	top = -1;
	S = new int[size];
}

Stack::~Stack()
{
	delete[] S;
}

void Stack::push(int x)
{
	if(isFull()==1)
	{
		cout << "Stack Overflow" << endl;
	}
	else
	{
	  top++;
	  S[top] = x;
	}
}

int Stack::pop()
{
	int x = -1;
	if(isEmpty()==1)
	{
			cout << "Stack Underflowflow" << endl;	
			x=-1;	
	}
	else
	{
		x =  S[top];
		top--;
	}
	
	return x;
}

int Stack::peek(int index)
{
	int x = -1;
	
	if(((top - index+1)< 0) || ((top -index+1)==size))
	{
		cout << "Invalid Index" << endl;	
		x = -1;
	}
	else
	{
		x = S[top -index+1];
	}
	
	return x;
}

int Stack::isFull()
{
	return (top == (size -1))?1:0;
}

int Stack::isEmpty()
{
	return (top == -1)?1:0;
}

void Stack::display()
{
	for(int i=top;i>=0;i--)
	{
		cout << S[i] << " | " << flush;	
	}
	
	cout << endl;
}

int Stack::stackTop() {
	
    if (isEmpty()){
        return -1;
    }
    
    return S[top];
} 

int main(int argc, char** argv) {
	
	int A[] = {10,1,9,23,20};
	
	Stack stack(sizeof(A)/sizeof(A[0]));
	
	for(int i=0;i<sizeof(A)/sizeof(A[0]);i++)
	{
		stack.push(A[i]);
	}
	
	
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
