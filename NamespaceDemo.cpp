#include<iostream>
//using namespace std;

namespace Marvellous
{
    void Display()
    {
        std::cout<<"Inside Display of Marvellous";

    }
}
namespace Infosystems
{
    void Display()
    {
        std::cout<<"Inside Display of Infosystems";
        
    }
}
int main()
{
    Marvellous::Display();
    Infosystems::Display();

    return 0;
}