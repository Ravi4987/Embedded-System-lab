#include <iostream>

using namespace std;		

class Rectangle
{
	private:		// Data should be private
	  int breadth;
	  int length;
	 
	public:
	void setBreadth(int b)	//  Mutators functions 
	{
		if(b>0)
		breadth = b;
		else	// You can give warning message also here
		breadth = 0;		
	}
	
	void setLength(int l)	// Mutators functions
	{
		if(l>0)
		length = l;
		else	// You can give warning message also here
		length = 0;
	}
	
	int getLength(void)		// Accessor functions
	{
		return length;	
	}
	
	int getBreadth(void)	// Accessor functions
	{
		return breadth;
	}
	
	
//	// Non paramterize contructor
//	Rectangle()		
//	{
//		length=0;
//		breadth=0;
//	}
	
	// Parameterized constructor
	Rectangle(int l=0, int b=0)	 
	{							//If nothing is passed in paramter l and b is equal to 0 in that case non paramterised constructor is not required
		setLength(l);
		setBreadth(b);
	}
	
	// Copy Constructor 
	Rectangle (Rectangle &rect)
	{
	    setLength(rect.length);
		setBreadth(rect.breadth);		
	}							
	  
	int area()
	{
		return length*breadth;
	}
	
	int perimter()
	{
		return 2*(length+breadth);
	}
};

int main(int argc, char** argv) {
	/*Below const calling paramterized constructor
	 because it overloading of non param const
	*/
	Rectangle npC;	
	Rectangle pC(10,5);
	Rectangle cC(pC);
	
	cout<<"Non Paramterized Const Area:"<<npC.area()<<"\r\n";
	cout<<"Non Paramterized Const Perimeter:"<<npC.perimter()<<endl;
	
	cout<<"Paramterized Const Area:"<<pC.area()<<"\r\n";
	cout<<"Paramterized Const  Perimeter:"<<pC.perimter()<<endl;
	
	cout<<"Copy Const Area:"<<cC.area()<<"\r\n";
	cout<<"Copy Const Perimeter:"<<cC.perimter()<<endl;
	
	
	
	
	return 0;
}
