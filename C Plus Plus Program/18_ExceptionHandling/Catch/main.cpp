# include<iostream>
using namespace std;
    
/*program for all about catch

*/
class myexception1: exception
{
	
};

class myexception2:public  myexception1
{
	
};

int main()
{
	try
	{
	//	throw myexception1();  // Class throw
	//  throw 1;				// Int throw
		throw 1.5f; 				// Float throw
	//   throw "abc";			// all catch throw as string catch is not defined
		
		try  // Nested try catch
		{
		   throw 1;	
		}
		catch(int e)
		{
			cout<<"Nested try catch Error:"<<e;			
		}
	}
	catch (int e)
	{
		cout<<"Bad Int Error:"<<e;
	}
	catch (float e)
	{
		cout<<"Bad Float Error:"<<e;
	}
	catch(myexception2 e)  // child class should be called first because parents class can its exception as well as its child class exception
	{
		cout<<"Child class catch"<<endl;
	}
	catch(myexception1 e)
	{
		cout<<"Parent class catch"<<endl;
	}
	catch(...)  // Default catch it suppports all kind of exception it should be at last
	{
		cout<<"all catch"<<endl;
	}
}
