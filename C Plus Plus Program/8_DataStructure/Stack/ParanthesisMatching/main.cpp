#include <iostream>
#include <cstring>

using namespace std;

class Stack{
	private:
		int size;
		int top;
		char *S;
	public:
		Stack(int size);
		~Stack();
		void push(char x);
		char pop();
		char peek(int index);
		int isFull(void);
		int isEmpty(void);
		void display();
		char stackTop();
};


Stack::Stack(int size)
{
	this->size = size;
	top = -1;
	S = new char[size];
}

Stack::~Stack()
{
	delete[] S;
}

void Stack::push(char x)
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

char Stack::pop()
{
	char x = -1;
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

char Stack::peek(int index)
{
	char x = -1;
	
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

char Stack::stackTop() {
	
    if (isEmpty()){
        return -1;
    }
    
    return S[top];
} 

bool isBalanced(char *exp)
{
	Stack stack((int)strlen(exp));
	
	for(int i = 0; i<strlen(exp);i++)
	{
		if(exp[i] == '(') //( found: Push to stack
		{
			stack.push(exp[i]);	
		}
		else if(exp[i]  == ')') // ) found pop
		{
			if(stack.isEmpty()==1)
			{
				return false;
			}
			else
			{
				stack.pop();
			}
		}
	}
	
 return (stack.isEmpty()==1)?true:false;
}

int main(int argc, char** argv) {
	
	char E[] = "((a+b)*(c-d))";
    cout << isBalanced(E) << endl;
 
    char F[] = "((a+b)*(c-d)))))))";
    cout << isBalanced(F) << endl;
 
    char G[] = "(((a+b)*(c-d))";
    cout << isBalanced(G) << endl;
    return 0;
    
}
