#include<iostream>
using namespace std;
template <class T>
void Reverse(T *arr,int isize)
{
    for (int i = isize; i>=0; i--)
    {
      
        cout<<arr[i]<<"\n";
    }
    cout<<"\t";
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    Reverse(arr,9);
    return 0;
}