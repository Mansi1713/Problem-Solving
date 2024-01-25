#include<stdio.h>
int main()
{
   float Radius=0.0f;
   const float pi=3.14;
   float area=0.0f;

   printf("Enter the size of radius");
   scanf("%f",&Radius);

   area=pi*Radius*Radius;
   printf("Area of circle is %f ",area);
    return 0;
}