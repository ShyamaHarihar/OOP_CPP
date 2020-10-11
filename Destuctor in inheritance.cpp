/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Base{
    public:
    Base()
    {
        cout<<"Base Constructor"<<endl;
    }
    ~Base()
    {
        cout<<"Base Destructor "<<endl;
    }
};
class Derived:public Base{
    public:
    Derived()
    {
        cout<<"Derived Constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived Destructor"<<endl;
    }
};
int main()
{
    Derived *p = new Derived();//output is Base Constructor Derived Constructor
    delete p;//derived destructor Base destructor
    cout<<"Stack memory object"<<endl;
    Derived d;//Base Constructor Derived Constructor Derived Destructor Base Destructor
}

