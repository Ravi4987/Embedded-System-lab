# include<iostream>
# include<forward_list>
using namespace std;
    
/*program for stl class using vector

*/
int main()
{
	forward_list<int> v={2,4,6,8,10};
	v.push_front(20);
	v.push_front(30);
	forward_list<int>::iterator itr;
	cout<<"using iterator"<<endl;
	for(itr=v.begin();itr!=v.end();itr++)
		cout<<++*itr<<endl;
	cout<<"using for each loop"<<endl;
	for(int x:v)
		cout<<x<<endl;
}
