#include<stdio.h>

int main()
{
    int no=10;
    int *p=NULL;
    p=&no;

    printf("%d",no);
    printf("%d",*p);

    *p=11;

    printf("%d",no);
    printf("%d",*p);
  /* int arr[3]={21,43,54};
   float arr1[4]={98.3,4.3,51.6,7.6};
   int no=2,i=0;
    
    
  // x=arr[2]+21;
 //  x++;

  // printf("%d\n",x);
 

   printf("%d\n",&(arr[5]));
   i++; 

   printf("%d\n",arr[no]);
   i++;

   printf("%f\n",arr1[i]);
*/
 
    return 0;
}