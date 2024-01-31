#include<iostream>
using namespace std;
template <class T>
int SearchFirst(T *arr,int isize,T ino)
{
    int icnt=0;
    int i=0;
    for (i = 0; i < isize; i++)
    {
      if (arr[i]==ino)
        {
            break;
        }
        
    }
    if (i==isize)
    {
        return -1;
    }
    else{
        return i+1;
    }
      
}
int main()
{
    int arr[]={10,20,30,10,30,40,10,30,40};
    int iret=SearchFirst(arr,9,40);
    printf("%d",iret);

    return 0;
}