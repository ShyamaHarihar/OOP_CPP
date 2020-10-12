#include <iostream>
using namespace std;
class Base{
	public:
		void display()
		{
			cout<<"Base display is called"<<endl;
		}
};
class Derived: public Base{
	public:
		void display()
		{
			cout<<"Derived Display is called"<<endl;
		}
};
int main()
{
	Derived d;
	d.display();
	
	}
