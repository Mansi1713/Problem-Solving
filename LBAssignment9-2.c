#include<stdio.h>
double RectArea(float fwidth,float fheight)
{
    double rarea=0.0f;
    rarea=fwidth*fheight;
    return rarea;

}
int main()
{
    float fvalue1=0.0f,fvalue2=0.0f;
    double dRet=0.0f;

    printf("Enter width");
    scanf("%f",&fvalue1);

    printf("Enter height");
    scanf("%f",&fvalue2);

    dRet=RectArea(fvalue1,fvalue2);
    printf("%f",dRet);
    return 0;
}