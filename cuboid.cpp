#include <iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
	Rectangle();
	Rectangle(int l,int b);
	Rectangle(Rectangle &r);
	int getLength(){return length;}
	int getBreadth(){return breadth;}
	void setLength(int l);
	void setBreadth(int b);
	//int area();
	//int perimeter();
	//bool isSquare();
	//~Rectangle();
};
class Cuboid:public Rectangle{
	private:
		int height;
		public:
			Cuboid(int h)
			{
				height=h;
			}
		int getHeight(){return height;}
		int setHeight(int h)
		{
			height=h;
		}
		int volume()
		{
			return getLength()*getBreadth()*height;
		}
		
};	
int main()
{
	Cuboid c(5);
	c.setLength(10);
	c.setBreadth(20);
	cout<<c.volume();
	return 0;
}
Rectangle::Rectangle(int l=0,int b=0)
{
	length=l;
	breadth=b;
}
Rectangle::Rectangle()
{
	length=0;
	breadth=0;
}
Rectangle::Rectangle(Rectangle &r){
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
