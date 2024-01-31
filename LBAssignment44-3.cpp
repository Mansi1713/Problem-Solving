#include<iostream>
template<class T>
T AddN(T *arr,int isize)
{
    T sum=0;
    for ( int i = 0; i < isize; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    
}
int main()
{
    int arr[]={10,20,30,40,50};
    float brr[]={10.2f,20.2f,30.3f,40.4f};

    int sum=AddN(arr,5);
    printf("%d\n",sum);

    float fsum=AddN(brr,4);
    printf("%f\n",fsum);

    return 0;

}