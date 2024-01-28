#include<stdio.h>
#include<stdlib.h>
int EvenCount(int Arr[],int iSize)
{
    int icnt=0;
    int ievencnt=0;
    printf("\nElements of the array are:\n");
    for( icnt = 0; icnt < iSize; icnt++)
    {
       if ((Arr[icnt]%2)==0)
       {
          ievencnt++;
    }
    }
    return ievencnt;
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
    iRet=EvenCount(p,iSize);
    printf("Resultis %d\n",iRet);
    free(p);
    return 0;
}
