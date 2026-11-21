#include <iostream>

using namespace std;


int  division()
{
	int divisor,dividend;

    cout<<"Enter Dividend:";
    cin >> dividend;
    
    cout<<"Enter Divisor:";
    cin >> divisor;
    
    if(divisor==0)
	throw 0;
	
	return (dividend%divisor);
		
}


int main(int argc, char** argv) {
int remainder;
	
	try
	{
		remainder = division();	
		cout<<"Remainder:"<<remainder;
	}
	
	catch (int e)
	{
		
		cout<<"You enter invalid value:"<<e;
	}
	
	
	
	
	return 0;
}

