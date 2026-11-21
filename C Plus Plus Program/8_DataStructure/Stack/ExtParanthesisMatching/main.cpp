#include <iostream>
#include <cstring>
#include <map>

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
int main(int argc, char** argv) {
	
	char A[] = "{([a+b]*[c-d])/e}";
    cout << isBalanced(A) << endl;
 
    char B[] = "{([a+b]}*[c-d])/e}";
    cout << isBalanced(B) << endl;
 
    char C[] = "{([{a+b]*[c-d])/e}";
    cout << isBalanced(C) << endl;
 
 
    return 0;
    
}
