#include <iostream>
using namespace std;
class Base{
	public:
	virtual	void display()
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
	Base *p = new Derived();
    p->display();//function is called based on pointer here base pointer
	//but when virtual is used it won't be called 	
	}
