#include<iostream>
template<class T>
T Min(T *arr,int isize)
{
    T min=arr[0];
    for ( int i = 0; i < isize; i++)
    {
        if (min > arr[i])
        {
            min=arr[i];
        }
        
    }
    return min;
    
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};

    int iret=Min(arr,5);
    printf("%d\n",iret);

    float fret=Min(brr,4);
    printf("%f\n",fret);

    return 0;

}