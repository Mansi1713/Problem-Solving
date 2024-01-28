#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
   int icnt=0; 
   for ( icnt = 0; icnt < iLength; icnt++)
   {
     if(((Arr[icnt] % 11)== 0))
     {
        printf("%d\t",Arr[icnt]);
     }   
   }
}
int main()
{
    int iSize=0,iRet=0,icnt=0;
    int *p=NULL;

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
    Display(p,iSize);
    free(p);
    return 0;   
}