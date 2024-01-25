#include<stdio.h>
void RevTable(int iNo)
{
    int i=0,ians=0;
    for (i=10; i >=1; i--) 
    {
             ians=iNo*i;          
             printf("%d\t",ians);
        
       
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    RevTable(iValue);
}
//o(n):