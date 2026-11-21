#include <iostream>

using namespace std;   // This is example of namespace

/*
If program contain two funtion with same name it will create conflict
to avoid this we have to use namespace that will distinguish function by name as
shown below.
You can call function like first::func() or just define using namespace first;
*/

namespace first  
{	
	void fun()
	{
		
		cout<<"First"<<endl;
	}	
};

namespace second
{	
	void fun()
	{
		
		cout<<"Second"<<endl;
	}	
};

using namespace first;  // when you are calling fun func first function will be called


int main(int argc, char** argv) {
	
	fun();
	second::fun();
	
	return 0;
}
