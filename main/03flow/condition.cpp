//
// Created by 游兰强 on 2020/10/30.
//
//C++ 支持的最基本的三种程序运行结构:顺序结构，选择结构，循环结构
#include "iostream"

using namespace std;

int main() {
    // 和java流程完全一致。

    // goto 语句
    //如果标记的名称存在，执行到goto语句时，会跳转到标记的位置

    cout << "1--" << endl;

    goto FLAG; //直接跳转到 FLAG 标签位置
    cout << "2--" << endl;
    FLAG:
    cout << "3--" << endl;

    return 0;
}
