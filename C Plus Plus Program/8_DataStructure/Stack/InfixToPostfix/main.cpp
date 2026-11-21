#include <iostream>
#include <string.h>
#include <cstring>
#include <map>
#include <cstdlib>

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

bool isBalanced(char* exp){
 
    // Create map
    map<char, char> mapping;
    mapping['}'] = '{';
    mapping[')'] = '(';
    mapping[']'] = '[';
 
    // Create map iterator
    map<char, char>::iterator itr;
 
    // Create stack
    Stack stk((int)strlen(exp));
 
    for (int i=0; i<strlen(exp); i++){
        if (exp[i] == '{' || exp[i] == '[' || exp[i] == '('){
            stk.push(exp[i]);
        } else if (exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){
            if (stk.isEmpty()){
                return false;
            } else {
                char temp = stk.stackTop();
                itr = mapping.find(exp[i]);
                if (temp == itr->second){  // itr->first is key, itr->second is value
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
    }
    return stk.isEmpty() ? true : false;
}

int isOperand(char x)
{
	 if(x=='+' || x=='-' || x=='*' || x=='/')
	 return 0;
	 else
	 return 1;
}

int pre(char x)
{
	 if(x=='+' || x=='-')
	 return 1;
	 else if(x=='*' || x=='/')
	 return 2;
	 return 0;
}


char *InToPost(char *infix)
{
	char *postfix;
	int pCount = 0;
	int iCount =0;
	int len =  sizeof(infix);
	postfix = (char *)malloc((len+2)*sizeof(char)); // 1 extra for null and #
	
	Stack stack((int)strlen(infix));
	
	stack.push('#');
	
	while(infix[iCount] != '\0')
	{
		if(isOperand(infix[iCount])==1)
		{
			postfix[pCount++] = infix[iCount++];
		}
		else
		{
			if(pre(infix[iCount]) > pre(stack.stackTop()))
			{
				stack.push(infix[iCount++]);
			}
			else
			{
				postfix[pCount++] = stack.pop();
			}	
		}	
	}
	
	while(stack.isEmpty() != 1)
	{
		postfix[pCount++] = stack.pop();
	}
	
	postfix[pCount] = '\0';
	
	return postfix;
}


int main(int argc, char** argv) {
	
	char *infix="a+b*c-d/e";

 	char *postfix=InToPost(infix);
 	
 	printf("Infix:%s\r\n",infix);

	 printf("Postfix:%s",postfix);
	
 
    return 0;
    
}
