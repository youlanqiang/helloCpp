//
// Created by youlanqiang on 2021/10/5.
// 学习运算符号重载

#include "myoperator.h"


int main()
{
    myoperator p1 = myoperator(10, 20);
    myoperator p2 = myoperator(20, 30);
    myoperator p3 = p1 + p2;
    p3.print();
    myoperator p4 = p2 - p1;
    p4.print();

    return 0;
}