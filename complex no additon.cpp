#include <iostream>
using namespace std;
class Complex{
 public:
 int real;
 int imag;
 public:
 Complex(int r=0,int i=0)
 {
     real=r;
     imag=i;
 }
 Complex add(Complex x)
     {
        Complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
     }
 
};
int main()
{
   Complex c1(3,7);
   Complex c2(5,4);
   Complex c3;
   c3=c1.add(c2);
   cout<<c3.real<<" + "<<c3.imag<<"i"<<endl;
}

