#include<stdio.h>
void Table(int iNo)
{
    int i=0,ians=0;
    for ( i =1; i <=10; i++) 
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
    Table(iValue);
}
//o(n)