#include<iostream>
template<class T>
T Max(T *arr,int isize)
{
    T max=arr[0];
    for ( int i = 0; i < isize; i++)
    {
        if (max < arr[i])
        {
            max=arr[i];
        }
        
    }
    return max;
    
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.0,3.7,9.8,8.7};

    int iret=Max(arr,5);
    printf("%d\n",iret);

    float fret=Max(brr,4);
    printf("%f\n",fret);

    return 0;

}