# include<iostream>
# include<memory>
using namespace std;

/*To run this example please enable c++ 11 In Dev C++ Go to Tools->Compiler Option->Programs

and add -std=c++11 under gcc and g++ for example gcc.exe -std=c++11 and g++.exe -std=c++11*/
    
/*program for using shared pointer

*/
class rectangle
{
	int length;
      	int breadth;
public:
	rectangle(int l,int b)
	{
		length=l;
	      	breadth=b;
	}
     	int area()
	{
		return length*breadth;
	}
};
int main()
{
	unique_ptr<rectangle> uptr(new rectangle(10,5));
	cout<<"Unique Pointer1"<<uptr->area()<<endl;
	unique_ptr<rectangle> uptr2;
	uptr2=move(uptr);
	cout<<"Unique Pointer2"<<uptr2->area()<<endl;
//	cout<<"Unique Pointer1"<<uptr->area()<<endl;   // As we transferred unique pointer 1 to pointer 2 we cant use pointer 1
	
	
	
	shared_ptr<rectangle> ptr(new rectangle(10,5));
	cout<<ptr->area()<<endl;
	shared_ptr<rectangle> ptr2;
	ptr2=ptr;
	cout<<"ptr2 "<<ptr2->area()<<endl;		// A object can be pointed by more than 1 share pointer
	cout<<"ptr "<<ptr->area()<<endl;
	cout<<"Total shared pointer:"<<ptr.use_count()<<endl;		// It will display total number of shared pointers pointing to object
}
