//
// Created by youlanqiang on 2021/8/11.
//
#include "iostream"
using namespace std;

void SwapValue(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout<<"��SwapValue������:\t\ta="<<a<<",b="<<b<<endl;
}

void SwapRef(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    cout<<"��SwapRef������:\t\ta="<<a<<",b="<<b<<endl;
}


int main()
{
    int a = 10, b = 20;
    cout<<"���ݽ���ǰ:\t\ta="<<a<<",b="<<b<<endl;
    SwapValue(a, b);
    cout<<"����SwapValue��:\t\ta="<<a<<",b="<<b<<endl;
    a = 10, b = 20;
    SwapRef(a, b);
    cout<<"����SwapRef��:\t\ta="<<a<<",b="<<b<<endl;
    return 0;
}