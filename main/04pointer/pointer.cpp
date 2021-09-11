//
// Created by youlaning on 2021/9/11.
//

#include <iostream>

using namespace std;

int main()
{

    int updates = 6;
    int * p_updates;
    p_updates = &updates;

    cout << "Values: updates = " << updates;  // 6
    cout << ", *p_updates = " << *p_updates << endl; //6

    cout << "Addresses: &updates = " << &updates; // 地址
    cout << ", p_update = " << p_updates << endl; // 地址

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    /**
     * int变量updates和指针变量p_updates只不过是同一枚硬币的两面。
     * 变量 updates表示值，使用 & 来获取地址。
     * 变量 p_updates 表示地址，使用 * 运算符号来获取值。
     * 由于 p_updates指向updates，因此 *p_updates 和 updates完全等价.
     */
    return 0;
}