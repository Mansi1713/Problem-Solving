#include<stdio.h>
void Number(int ino)
{
    if (ino<50)
    {
       printf("small");
    }
    else if(ino>50 && ino<100)
    {
        printf("medium");
    }
    else if (ino>100)
    {
        printf("Large");
    }


}
int main()
{
    int ivalue=0;
    
    printf("Enter number");
    scanf("%d",&ivalue);
    Number(ivalue); 

    return 0;
}