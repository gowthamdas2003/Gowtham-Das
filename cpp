#include<iostream>
using namespace std;
class complex
{
public:
int realpart,imagp;
static int count;
complex()
{
 cout<<"Enter Data for real and imaginary"<<count+1<<":";
 cin>>realpart>>imagp;
 count++;
 }
complex operator+(complex obj1)
{
  complex obj2;
  obj2.realpart=obj1.realpart+realpart;
  obj2.imagp=obj1.imagp+imagp;
  return obj2;
  }
  void operator++()
  {
    cout<<"\n--the pre increment operator is invoked--";
    ++realpart;
    ++imagp;
    }
 void operator++(int a)
 {
   cout<<"\n--the post increment operator is invoked--";
   realpart++;
   imagp++;
   }
   void display()
   {
    cout<<"\n the complex number is:"<<realpart<<"+"<<imagp<<"i"<<endl;
    }
    };
    int complex::count=0;
    int main(void)
    {
     complex obj1;
     complex obj2;
     complex obj3=obj1+obj2;
     ++obj3;
     obj3++;
     obj3.display();
     }
    
