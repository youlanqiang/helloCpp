//
// Created by youla on 2019/11/28.
//

#include<iostream>

using namespace std;

int main() {
    /**
     * short(2) int(4) long(4) long long(8)
     * 利用sizeof求出数据类型占用内存大小
     * 语法: sizeof(数据类型/ 变量)
     */
    short num1 = 10;
    cout << "short sizeof:" << sizeof(num1) << endl;

    int num2 = 10;
    cout << "int sizeof:" << sizeof(num2) << endl;

    long num3 = 10;
    cout << "long sizeof:" << sizeof(num2) << endl;

    long long num4 = 10;
    cout << "long long sizeof:" << sizeof(num2) << endl;
    return 0;
}