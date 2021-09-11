//
// Created by youlanqiang on 19-11-21.
// C++中使用函数来解决重复代码问题.
//

#include <iostream>

using namespace std;

void println(char* str)
{
    std::cout << str << std::endl;
}

// 定义带默认值的函数.
void func(int a = 11, int b = 22, int c = 33){
    cout << "a=" << a << " b=" << b << " c=" << c << endl;
}

int main()
{
    char str[] = "hello, world";
    println(str);
    return 0;
}
