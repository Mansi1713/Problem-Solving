#include<iostream>
using namespace std;
template <class T>
int Frequency(T *arr,int isize,T ino)
{
    int icnt=0;
   for (int  i = 0; i < isize; i++)
   {
      if (arr[i]==ino)
      {
         icnt++;
      }
      
   }
   return icnt;
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,30,40};
    int iret=Frequency(arr,9,10);
    printf("%d",iret);

    return 0;
}