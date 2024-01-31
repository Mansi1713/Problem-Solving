#include<iostream>
using namespace std;
template <class T>
void Display(T value,int isize)
{
    int i=0;
    for ( i = 0; i < isize; i++)
    {
        cout<<value<<" ";
    }
    
}
int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
}