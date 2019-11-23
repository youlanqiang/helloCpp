//
// Created by youlanqiang on 19-11-21.
// C++中使用函数来解决重复代码问题.
//

#include <iostream>

void println(char* str)
{
    std::cout << str << std::endl;
}

int main()
{
    char str[] = "hello, world";
    println(str);
    return 0;
}
