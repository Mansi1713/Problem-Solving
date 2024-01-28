#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iSize)
{
    int icnt=0;
    int ievencnt=0;
    int ioddcount=0;
   // int 
    printf("\nElements of the array are:\n");
    for( icnt = 0; icnt < iSize; icnt++)
    {
       
      if ((Arr[icnt]==11))
      {
        return TRUE;
      }
      else
      {
        return FALSE;
      }
    }  
}
int main()
{
   int iSize=0,iRet=0,icnt=0;
    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize* sizeof(int));

    if (p==NULL)
    {
        printf("unable to allocate memory..");
        return -1;

    }
    printf("Enter %d elements ",iSize);
    for ( icnt = 0; icnt < iSize; icnt++)
    {
        printf("Enter element: %d",icnt+1);
        scanf("%d",&p[icnt]);
    }
    bRet=Check(p,iSize);
    if (bRet==TRUE)
    {
        printf("11 is present");
    }
    else{
        printf("11 is absent.");


    }
     free(p);    
    return 0;
}
