#include<stdio.h>

void Fun_Value(int no)
{
    no++;
}
void Fun_Address(int *ptr)
{

    (*ptr)++;
}
void Fun_Reference(int &ref)
{
      ref++;}
int main()
{
    int i=10,j=10,k=10;

    Fun_Value(i);
    Fun_Address(&j);
    Fun_Reference(k);

    printf("Call by value i %d",i);
    printf("Call by value j %d",j);
    printf("Call by value k %d",k);


    return 0;
}