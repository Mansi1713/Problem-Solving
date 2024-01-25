#include<iostream>
using namespace std;
class Demo
{
    public:
         int i;
         int j;
          
         Demo(int a=10,int b=20)
         {
            i=a;
            j=b;
         } 
         void Display()
         {
            cout<<"Value of i"<<i<<"\n";
            cout<<"Value of i"<<j<<"\n";
         }
};
int main()
{
    Demo obj1;
    obj1.Display();

    Demo obj2;
    Demo(101,201);
    obj2.Display();

    Demo obj3;
    Demo(11);
    obj3.Display();
    return 0;
}