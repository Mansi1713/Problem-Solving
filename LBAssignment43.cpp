#include<iostream>
using namespace std;

class Array
{
    protected:
          int *Arr;
          int size;
    public :
          Array(int value=10)
          {
            cout<<"Inside constructer\n";
            this->size=value;
            this->Arr=new int[size];

          }
          Array(Array &ref)
          {
            cout<<"Inside copy of constructer\n";
            this->size=ref.size;
            this->Arr=new int[this->size];
            
            for ( int i = 0; i < size; i++)
            {
               this->Arr[i]=ref.Arr[i];
            }
            
          }
         ~Array()
         {
            cout<<"Inside destructor";

            delete []Arr;
         }        
         inline void Accept();
         inline void Display();
};
void Array::Accept()
{
    cout<<"Please enter the values\n";
    for (int  i = 0; i < this->size; i++)
    {
        cin>>Arr[i];
    }
    cout<<"\n";
}
void Array::Display()
{
    cout<<"Please enter the values\n";
    for (int  i = 0; i < this->size; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}
class ArrSearch:public Array
{
    public:
      ArrSearch(int no=10):Array(no)
      {

      }
      int Frequency(int);
      int SearchFirst(int);
      int SearchLast(int);
      int EvenCount();
      int OddCount();
      int SumAll();
      
};

int ArrSearch::SearchFirst(int value)
{
    int i=0;
    for ( i = 0; i < size; i++)
    {

        if (Arr[i]==value)
        {
            break;
        }
        
    }
    if (i==size)
    {
        return -1;
    }
    else{
        return i+1;
    }
    
    
}
int ArrSearch::SearchLast(int value)
{
    int i=0;
    for ( i = size;i>0; i--)
    {

        if (Arr[i]==value)
        {
            break;
        }
        
    }
    if (i==size)
    {
        return -1;
    }
    else{
        return i+1;
    }
    
    
}
int ArrSearch::Frequency(int value)
{
    int icnt=0;
    for ( int i = 0; i < size; i++)
    {
        if (Arr[i]==value)
        {
            icnt++;
        }
        
    }
    return icnt;
    
}
int ArrSearch::EvenCount()
{
    int ecnt=0;
    for ( int i = 0; i < size; i++)
    {
        if (Arr[i]%2==0)
        {
            ecnt++;
        }
        
    }
    return ecnt;
}
int ArrSearch::OddCount()
{
    int ocnt=0;
    for ( int i = 0; i < size; i++)
    {
        if (Arr[i]%2!=0)
        {
            ocnt++;
        }
        
    }
    return ocnt;
}
int ArrSearch::SumAll()
{
    int SumAll=0;
    for ( int i = 0; i < size; i++)
    {
       SumAll=SumAll+Arr[i];
        
    }
    return SumAll;
}
int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj(5);
    sobj.Accept();
    sobj.Display();

    int iret=sobj.Frequency(11);
    cout<<"Frequency is  :"<<iret<<"\n";


    iret=sobj.SearchFirst(11);
    cout<<"First occurance is  :"<<iret<<"\n";


    iret=sobj.SearchLast(11);
    cout<<"Last occurance is  :"<<iret<<"\n";


    iret=sobj.EvenCount();
    cout<<"Even count is :"<<iret<<"\n";


    iret=sobj.OddCount();
    cout<<"Odd count is  :"<<iret<<"\n";


    iret=sobj.SumAll();
    cout<<"Sum of all elements  :"<<iret<<"\n";

}
