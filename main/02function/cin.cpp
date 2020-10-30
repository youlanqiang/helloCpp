//
// Created by 游兰强 on 2020/10/27.
//
#include "iostream"
#include "string"
using namespace std;

int main()
{
    int a = 0;
    // 如果输入非数字，a会为0
    cout << "输入number" << endl;
    cin >> a;
    cout << "a = " << a << endl;

    string str;

    cout << "请输入字符串" << endl;
    cin >> str;
    cout << "str = " << str << endl;

    bool b;

    //输入 true 和 false 无效
    //输入 0 和 1 有效
    cout << "请输入布尔值" << endl;
    cin >> b;
    cout << "b = " << b << endl;

    return 0;
}
