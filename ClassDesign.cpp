#include<iostream>
using namespace std;
class Array
{
    private:
      int *Arr;
      int ilngth;
    public :
        Array(int Size)
        {
            ilngth=Size;
            Arr=new int[ilngth];
        }   
        void Accept()
        {
            int icnt=0;
            cout<<"ENter the elements:"<<"\n";
            for ( icnt = 0; icnt < ilngth; icnt++)
            {
             cin>>Arr[icnt];
            }
            
        }
        void Display()
        {
            int icnt=0;
             cout<<"Elements of the array are:";
             for (icnt  = 0; icnt < ilngth; icnt++)

             {
                cout<<Arr[icnt];
             }
             
        }
};
int main()
{
    Array aobj(5);
    return 0;
}
