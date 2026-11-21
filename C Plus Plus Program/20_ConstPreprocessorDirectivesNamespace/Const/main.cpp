#include <iostream>

using namespace std;

class demo
{
	public:
	int i=10;
	
	void IncDisplay(void) const  
	{
	//	i++;  // If you defined here as const here then this function cant change value of member of its class
		cout<<"I:"<<i<<endl;	
	}	
};


void fun(const int &x,int &y)
{
//	x++; // as you defined this param as const you can change it
	y++;
	cout<<"x:"<<x<<" y:"<<y<<endl;	
}

int main(int argc, char** argv) {
	int a=10, b=20;
	
	demo d;
	
	d.IncDisplay();
	
	fun(a,b);
	
	
	return 0;
}
