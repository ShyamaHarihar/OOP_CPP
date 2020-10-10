/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setLength(int l)
    {
        if(l>0){
            length=l;}
            else{
                length=0;
            }
    }
    void setBreadth(int b)
    {
        if(b>0){
            breadth=b;}
            else{
                breadth=0;
            }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
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
    Rectangle *p;
    p=new Rectangle();
    int a,b;
    cout<<"Enter length";
    cin>>a;
    cout<<"Enter breadth";
    cin>>b;
    p->setLength(a);
    p->setBreadth(b);
    cout<<"Length is "<<p->getLength()<<endl;
    cout<<"Breadth is "<<p->getBreadth()<<endl;
    cout<<p->area()<<endl;
    cout<<p->perimeter()<<endl;
    

    return 0;
}
