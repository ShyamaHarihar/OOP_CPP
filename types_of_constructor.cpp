/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    void setLength(int l)
    {
        if(l>0)
        {
            length=l;
        }
        else{
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>0)
        {
            breadth=b;
        }
        else{
            breadth=0;
        }
    }
    Rectangle()
    {
        length=0;
        breadth=0;
    }//deafult constructor
    Rectangle(int l,int b)
    {
        setLength(l);
        setBreadth(b);
    }//parametrasied constructor
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }//copy constructor 
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    
    Rectangle r1(10,20);//parametrasied constructor
    Rectangle r2(r1);//copy constructor
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;

    return 0;
}
