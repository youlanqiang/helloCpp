//
// Created by youlanqiang on 19-11-20.
// cpp中的变量

#include <iostream>

/**
 * 变量和常量的标识符规则名称
 * -标识符不能是关键字
 * -标识符只能由字母，数字，下划线组成
 * -第一个字符必须为字母或下划线
 * -标识符中字母区分大小写
 */

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

