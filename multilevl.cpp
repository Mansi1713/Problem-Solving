#include<iostream>
using namespace std;
class Demo
{
   public:
         int x,y;
         Demo()
         {
            cout<<"Inside demo constructor\n";
            x=10;
            y=20;
         }
         ~Demo()
         {
            cout<<"Inside demo destructor\n";
         }
         void fun()
         {
            cout<<"Inside fun of demo\n";
         }
};
class Hello:public Demo
{
    public:
         int a,b,c;
         Hello()
         {
            cout<<"Inside hello...\n";
            a=30;
            b=40;
            c=50;
         }
         ~Hello()
         {
            cout<<"Inside hello...\n";
         }
         void gun()
         {
            cout<<"Inside gun of hello\n";
         }
};
class Marvellous:public Hello
{
     public:
          int p;
          Marvellous()
          {
            cout<<"Inside constructor of marvelous";
            p=60;
          }
          ~Marvellous()
          {
            cout<<"Inside desctructor of marvelous";
            p=60;
          }
          void sun()
          {
            cout<<"Inside sun of marvellous\ns";
          }

}; 
int main()
{
    Marvellous mobj;
    cout<<sizeof(mobj)<<"\n";

    cout<<mobj.x<<"\n";
    cout<<mobj.y<<"\n";
    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";
    cout<<mobj.p<<"\n";


    mobj.fun();
    mobj.gun();
    mobj.sun();
    return 0;
}