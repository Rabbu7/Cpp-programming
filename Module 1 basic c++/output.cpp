#include<iostream>
int main()
{
    // std::cout<<"hello world";  //for output

    std::cout<<"hello "<<"world";  // multiple print
    std::cout<<"hello"<<std::endl<<"world";    // for new line

    int a=100;
    std::cout<<a;  // variable print
    int e=100,b=35;
    std::cout<<e<<" "<<b;    // multiple variable print
    std::cout<<e<<" "<<b<<"\n";    // multiple variable print with new line

    return 0;
}