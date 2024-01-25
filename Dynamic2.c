#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Arr[5]; // static memory
    float fValue; //static memory
    double Brr[4]; //static memory

    int iSize=0;
    int *ptr=NULL;

    printf("Enter the size of array");
    scanf("%d",&iSize);

    ptr=(int *)calloc(iSize,sizeof(int));
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    free(ptr);

    return 0;
}