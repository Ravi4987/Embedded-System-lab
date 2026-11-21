#include <iostream>

//#define SAME_LOC // comment this macro to allocate different array in copy constuctor

using namespace std;

class Test
{
	
public:
	int a;
	int *p;
	
	

	Test (int x)
	{
		a=x;
		p = new int[a];	// array
	}
	
#ifdef  SAME_LOC	
	Test (Test &cTest)
	{
		a = cTest.a;
		p = cTest.p; // It will point to same array of paramter object
	}
#else
	Test (Test &cTest)
	{
		a = cTest.a;
		p = new int[a]; 
	}
#endif
};



int main(int argc, char** argv) {
	
	Test t(2);
	Test cT(t);
	
	cout<<"Const Var:"<<t.a<<" Copy Const Var:"<<cT.a<<endl;
	cout<<"Const Arr Mem:"<<t.p<<" Copy Const Arr Mem:"<<cT.p<<endl;
	
	return 0;
}
