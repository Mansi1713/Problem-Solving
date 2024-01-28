#include<stdio.h>
void DisplayASCII()
{
    int icnt=0;
    for ( icnt = 0; icnt <= 127; icnt++)
    {
         printf("%c\t%d\t%o\t%x",icnt,icnt,icnt,icnt);
    }
    
}
int main()
{
    DisplayASCII();
    return 0;
}