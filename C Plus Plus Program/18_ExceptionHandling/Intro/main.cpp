#include <iostream>

using namespace std;

int main(int argc, char** argv) {
int divisor,dividend,remainder;

    cout<<"Enter Dividend:";
    cin >> dividend;
    
    cout<<"Enter Divisor:";
    cin >> divisor;
	
	try
	{
		if(divisor==0)
		throw 0;
		remainder = dividend%divisor;
		cout<<"Remainder:"<<remainder;		
	}
	
	catch (int e)
	{
		
		cout<<"You enter invalid value:"<<e;
	}
	
	
	
	
	return 0;
}
