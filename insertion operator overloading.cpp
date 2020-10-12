#include <iostream>
using namespace std;
class Complex{
	private:
		int real;
		int imag;
	public:
		Complex(int r=0,int i=0){
			real=r;
			imag=i;
		}	
		friend ostream &  operator<<(ostream &out,Complex &c1);	
};
ostream &  operator<<(ostream &o,Complex &c1){
		o<<c1.real<<" +i "<<c1.imag<<endl;
		return o;
		}
int main()
{
	Complex c1(10,5);
	operator<<(cout,c1);
}
