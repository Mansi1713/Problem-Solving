#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int ievensum=0;
    int ioddsum=0;
    int icnt=0;
    int idiff=0;
    for(icnt=0;icnt<iLength;icnt++)
    {
        if ((Arr[icnt]%2)==0)
        {
            ievensum=ievensum+Arr[icnt];
        }
        else
        {
            ioddsum=ioddsum+Arr[icnt];
        }
        
    }
    idiff=ievensum-ioddsum;
    return idiff;
    
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
    iRet=Difference(p,iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;   
}