#include<iostream>
using namespace std;
class Demo
{
    int i;
    public:
        int j;
    private:
        int k;
    protected:
        int a;
    public:
          Demo()
          {
            i = 10;
            j = 20;
             k= 30;
             a= 40;
          } 
          void Display()
          {
            cout<<"Value of i"<<i;
            cout<<"Value of j"<<j;
            cout<<"Value of k"<<k;
            cout<<"Value of a"<<a;

            
          }
};
class Hello:public Demo{

    public:
          void HelloDisplay()
          {
       //     cout<<"Value of i"<<i;
            cout<<"Value of j"<<j;
         //   cout<<"Value of k"<<k;
            cout<<"Value of a"<<a;
          }
};
int main()
{
     Demo obj;
     //cout<<"Value of i"<<obj.i;
     cout<<"Value of j"<<obj.j;
     //cout<<"Value of k"<<obj.k;
     //cout<<"Value of a"<<obj.a;
     obj.Display(); 
     Hello hobj;
     hobj.HelloDisplay();
    return 0;
}