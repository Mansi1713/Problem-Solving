#include<iostream>
using namespace std;
class Demo
{
   public:
         int i;
         int j;
         int k;
         Demo(int a = 10, int b = 20, int c = 30)
        {
            cout<<"Value of this is : "<<this<<"\n";
            this->i = a;
            this->j = b;
            this->k = c;
        }
         void Fun(int no1,int no2)
         {
            cout<<"Inside fun";
         }
         void Display()
         {
            cout<<"Inside Display<<\n";
            cout<<"Value of this pointer"<<this<<"\n";

         }
};
int main()
{

     Demo obj1;
     Demo obj2(11,21,51);

     obj1.Fun(5,6);

     obj2.Fun(8,9);

     cout<<"Adress of obj1 is"<<&obj1<<"\n";
     obj1.Display();
     
     cout<<"Adress of obj2 is"<<&obj2<<"\n";
     obj2.Display();

    return 0;
}