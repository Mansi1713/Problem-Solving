#include<stdio.h>
int Addition(int No1,int No2)

{
    int Sum=0;
    Sum=No1+No2;
    return Sum;
}
int Subtarcion(int data1,int data2)
{
    int sub=0;
    sub=data1-data2;
    return sub;
}
int multiplication(int no1,int no2)
{
    int mul=0;
    mul=no1*no2;
    return mul;
}
int main()
{
    int value1=10;
    int value2=20;
    int ans=0;

    ans=Addition(value1,value2);
    printf("Addition is: %d\n",ans);

    ans=Subtarcion(value1,value2);
    printf("subtraction is %d\n",ans);

    ans=multiplication(value1,value2);
    printf("multiplication is %d\n",ans);
    return 0;
}