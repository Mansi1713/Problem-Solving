#include<iostream>
using namespace std;
class Base
{
  
};
class  Derived:public Base
{
    public:
         int a,b;
   
};
int main()
{
    Base bobj;
    Derived dobj;

    cout<<".."<<sizeof(bobj);
     cout<<"//"<<sizeof(dobj);
    return 0;
}