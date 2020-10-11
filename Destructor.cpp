/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Test
{
public:
Test(){
    cout<<"Constructor called"<<endl;
}
~Test(){
   cout<<"Destructor called"<<endl;  
}
};

    
int main()
{
    //Test *p= new Test();//Object is created in heap and only constructor is called
    //delete p; Here only destructor is called
    Test t;//when t is created constructor and destructor is called
}