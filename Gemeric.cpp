#include<iostream>

using namespace std;
template <class T>
T Addition(T no1,T no2)
{
    T ans;
    ans=no1+no2;
    return ans;
}

int main()
{
    int iRet;

    iRet= Addition(10,11);
    cout<<iRet<<"\n";



    return 0;
}