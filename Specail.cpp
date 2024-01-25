#include<iostream>
using namespace std;
class Demo
{
    public:
         int i;
         int j;
         Demo()//default constructor
         {
             cout<<"Inside Default constructr..\n";
             i=0;
             j=0;

         }
         Demo(int A,int B)//default constructor
         {
             cout<<"Inside parametrised constructr..";
             i=A;
             j=B;
             
         }
         Demo(Demo &ref)
         {
            cout<<"Inside copy constructor";
            i=ref.i;
            j=ref.j;
         }
         ~Demo()
        {
          cout<<"Inside desctor";
        }
};
int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);
    return 0;
}
