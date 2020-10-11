/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Rectangle {
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;};//inline functions 
    int getBreadth(){return breadth;};
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};

int main()
{
    Rectangle r1(10,10);
    if(r1.isSquare())
    {cout<<"true"<<endl;}
    else {
        cout<<"false"<<endl;
    }
    cout<<"Area is"<<r1.area()<<endl;
    cout<<"Perimeter is"<<r1.perimeter()<<endl;
    return 0;
}
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
bool Rectangle::isSquare()
{
    if(length==breadth)
    {
        return true;
    }
    else{
        return false;
    }
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle destroyed";
}