#include<stdio.h>

int main()
{
    float arr[]={10.3,43.3,45.43,243.22};

    float*p=NULL;
    float*q=NULL;
    p=arr;
    q=&(arr[3]);

    printf("%d\n",p);
    printf("%d\n",q);
    printf("%f\n",*q);
    printf("%f\n",*p);
    printf("%f\n",*(p+2));
    printf("%f\n",*(p+1));
    printf("%f\n",p[1]);
    printf("%f\n",*(2+arr));
    printf("%f\n",0[arr]);
    printf("%f\n",q-p);
    printf("%f\n",*(q-2));

    
    
    



    return 0;
}