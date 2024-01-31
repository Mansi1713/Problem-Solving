#include<iostream>
template<class T>
T Multiply(T no1,T no2)
{
    T ans;
    ans=no1*no2;
    return ans;

}
int main()
{
    int iret=Multiply(10,20);
    printf("%d\n",iret);


   
    float fret=Multiply(10.2f,20.3f);
    printf("%f\n",fret);



   return 0;
}