#include<iostream>
using namespace std;
class Base
{
    public:
          int i,j,k;
          virtual void Fun() //1000
          {
            cout<<"Inside Base function";

          } 
          void Sun() //2000
          {
            cout<<"Inside Base Sun";
          }
          void Run() //3000
          {
            cout<<"Inside Base Run";
          }
          virtual void Gun() //4000
          {
            cout<<"Inside Base Gun";
          }


};
class  Derived:public Base
{
    public:
         int a,b;
         virtual void Gun() //5000
         {
            cout<<"Inside Derived gun";
         }
         void Run() //6000
         {
            cout<<"Inside deived run";
         }
         virtual void Mun() //6000
         {
            cout<<"Inside deived mPun";
         }
   
};
int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    Base *bp=new Derived;
    bp->Fun();
    bp->Gun();
    bp->Run();
    bp->Sun(); 
    return 0;
}