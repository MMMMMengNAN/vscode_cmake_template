#include <iostream>
void fun()
{
    static int a = 1;
    a++;
    std::cout<<a<<std::endl;
}
int main()
{
    std::cout<<"hell vscode mingW!"<<std::endl;
    fun();
    fun();
    fun();
    std::cin.get();
}