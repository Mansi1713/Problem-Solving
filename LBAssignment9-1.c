#include<stdio.h>
double CircleArea(float fRadius)
{
    double carea=0.0f;
    carea=3.14*fRadius*fRadius;
    return carea;

}
int main()
{
    float fValue=0.0f;
    double dRet=0.0f;
    printf("Enter radius");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("%f",dRet);
    return 0;
    
}