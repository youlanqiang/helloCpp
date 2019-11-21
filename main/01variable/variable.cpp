//
// Created by youlanqiang on 19-11-20.
// cpp中的变量

#include <iostream>


int main()
{
    // char, short, int, long, long long
    int variable = -8;
    std::cout << variable << std::endl;
    unsigned int unSignedVariable = 30;
    std::cout << unSignedVariable << std::endl;

    char a = 'A';
    std::cout << a << std::endl;
    a = 65;
    std::cout << a << std::endl;

    //float,double
    float f1 = 5.5;
    std::cout << f1 << std::endl;

    //bool
    bool bo = true; //or false 1 or 0
    std::cout << bo << std::endl;

    //check 变量的内存大小
    std::cout << sizeof(bo) << std::endl;
    return 0;
}

