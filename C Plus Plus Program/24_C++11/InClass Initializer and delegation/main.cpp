# include<iostream>
# include<memory>
using namespace std;
    
/*program for using initializer and delegation of constructors

*/
class test
{
public:
	int x=10;		// You can initialize the member in class
      	int y=13;

	test(int a,int b)
	{
		x=a;
	    y=b;
	    cout<<"x:"<<x<<endl;
	    cout<<"y:"<<y<<endl;
	}
	

    test():test(1,1)	// We can 
	{
	
	}
};

int main()
{
	test t(10,9);
	test s();
	


}
