//
// Created by youla on 2019/11/28.
//

#include <iostream>
using namespace std;

/**
 *  C和C++中字符型变量只占用1个字节
 */

int main()
{
    // 1. 字符型变量创建方式
    char ch = 'a';
    cout<< ch <<endl;

    // 2. 字符型变量所占内存大小 bit
    cout<< "char sizeof:" << sizeof(ch) <<endl;

    // 3. 字符型变量常见错误
//    char ch2 = "ad";
//    char ch2 = 'dasds';
    // 4. 字符型变量对应ASCII编码
    cout<< (int)ch <<endl;



    return 0;
}