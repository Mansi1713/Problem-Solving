#include<stdio.h>
int main()
{
   int Arr[4]={11,21,31,41};

   printf("Base address of array %d\n",Arr);
   printf("Base address of array %d\n",&(Arr[0]));
   printf("First element is %d\n",Arr[0]);
   printf("Size of whole array %d\n",sizeof(Arr));
   printf("Size of second element of array %d\n",sizeof(Arr[1]));
   printf("Base address of array %d\n",&(Arr[0]));
    return 0;
}