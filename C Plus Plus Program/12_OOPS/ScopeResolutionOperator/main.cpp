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
	
	  
	int area() // If we define function inside the class then it is inline function
	{
		return length*breadth;
	}
	
	inline void function(); 
	
	/*Below is function prototype it is good practice just write 
	func prototype inside the class and definition outside the 
	class using scope resolutiion
	*/
	int perimter();
};

void Rectangle::function()
{
	printf("Inline function definition outside the class\r\n");
}

int Rectangle::perimter() // Scope Resolution
{
	return 2*(length+breadth);
}


int main(int argc, char** argv) {
	Rectangle r;
	
	r.setBreadth(10);
	r.setLength(5);
	
	cout<<"Length:"<<r.getLength()<<endl;
	cout<<"breadth:"<<r.getBreadth()<<endl;
	
	cout<<"Area:"<<r.area()<<"\r\n";
	cout<<"Perimeter:"<<r.perimter()<<endl;
	
	r.function();
	
	
	return 0;
}

