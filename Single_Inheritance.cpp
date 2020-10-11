/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class base{
    public:int x;
    public:
    void get_x()
    {
        cout<<x<<endl;
    }
};
class Derived:public base{
    public:
    int y;
    void show()
    {
       cout<<x<<" "<<y; 
    }
    
};
int main()
{
    base b;
    b.x=10;
    b.get_x();
    Derived d;
    d.x=50;//this has to be assigned again for the derived class object else it says x is 0 x is 10 only for the base object 
    d.y=30;//derived class has x,y,get_x and show 
    d.show();

    return 0;
}
