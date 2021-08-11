//
// Created by youla on 2021/8/9.
//
#include "iostream"
using namespace std;

int main()
{
    int oneInt = 1;
    int &ref = oneInt;   // ref 是oneInt的引用，ref等价与oneInt
    const int &refc = oneInt; // 定义常引用
    ref = 2; // 修改了 ref也即修改了oneInt

    cout<<"oneInt="<<oneInt<<","<<"ref="<<ref<<endl;
    //oneInt=2,ref=2
    cout<<"refc="<<refc<<endl;
    //refc=2

    oneInt = 3; // 修改oneInt也即修改了ref
    cout<<"ref="<<ref<<endl;   //ref=3
    cout<<"refc="<<refc<<endl; //refc=3

    int &ref2 = ref;
    cout<<"ref2="<<ref2<<endl;// ref2=3

    const int &ref3 = ref;
    int &ref4 = const_cast<int &>(ref3);
    return 0;
}