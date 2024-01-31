#include<iostream>
template <class T>

T max(T no1,T no2,T no3)
{
   if ((no1>no2)&&(no1>no3))
   {
     return no1;
   }
   else if ((no2>no1)&&(no2>no3))
   {
     return no2;
   }
   else
   {
     return no3;
   }
   
}
int main()
{
    int iret=max(10,20,30);
    printf("%d\n",iret);

    float fret=max(10.2f,20.22f,30.33f);
    printf("%f\n",fret);
    return 0;
}



