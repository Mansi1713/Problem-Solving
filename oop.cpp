#include<iostream>
using namespace std;
class Demo
{
   public:
       int i;
       int j;

       void fun()
       {
         cout<<"Inside fun of demo class..\n";
       }
};
int main()
{
    Demo obj1;
    Demo obj2;
    Demo obj3;

    obj1.i=11;
    obj1.j=21;
   
    obj2.i=10;
    obj2.j=20;

    obj3.i=90;
    obj3.j=88;
    
    obj1.fun();
    obj2.fun();
    obj3.fun();
    return 0;
}
