//
// Created by youlanqiang on 2021/10/5.
//

#ifndef HELLOCPP_MYOPERATOR_H
#define HELLOCPP_MYOPERATOR_H

#include "iostream"

class myoperator {
public:
    myoperator(){};
    myoperator(int a, int b):age(a),balance(b){};
    int age;
    int balance;
    myoperator operator+(myoperator &m2) //成员函数运算符重载
    {
        myoperator temp;
        temp.age = this->age + m2.age;
        temp.balance = this->balance + m2.balance;
        return temp;
    };
    void print();
};

void myoperator::print() {
    using namespace std;
    cout<< "age:" << this->age << " balance:" << this->balance << endl;
}


// 全局函数运算符重载
myoperator operator-(myoperator &m1, myoperator &m2)
{
    myoperator temp;
    temp.age = m1.age - m2.age;
    temp.balance = m1.balance - m2.balance;
    return temp;
}


#endif //HELLOCPP_MYOPERATOR_H
