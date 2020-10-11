/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    int mark1,mark2,mark3;
    int average;
    public:
    void setRollno(){cin>>rollno;};
    void setName(){cin>>name;};
    void setMarks();
    int getRollno(){cout<<rollno;};
    int getName(){cout<<name;};
    int getMarks();
    int getAverage();
    int getGrade();
};
int Student::getMarks()
{
    cout<<" Marks are "<<mark1<<mark2<<mark3<<endl;
}
int Student::getAverage()
{
    average= (mark1+mark2+mark3)/3;
    cout<<"Average is "<<average<<endl;
}
void Student::setMarks()
{
   cin>>mark1;
   cin>>mark2;
   cin>>mark3;
}
int Student::getGrade()
{
  if(average>=60)
  {
      cout<<"A"<<endl;
  }
  else if(average<60 && average>=40)
  {
      cout<<"B"<<endl;
  }
  else
  {
      cout<<"C"<<endl;
  }
}
int main()
{
    Student s1;
    cout<<"Enter rollno"<<endl;
    s1.setRollno();
    cout<<"Enter name"<<endl;
    s1.setName();
    cout<<"Enter marks"<<endl;
    s1.setMarks();
    cout<<"The roll no is "<<endl;
    s1.getRollno();
    cout<<"Name is "<<endl;
    s1.getName();
    cout<<"Marks are "<<endl;
    cout<<s1.getMarks()<<endl;
    s1.getAverage();
    s1.getGrade();
    
}