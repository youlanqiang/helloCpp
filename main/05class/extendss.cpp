//
// Created by youlanqiang on 2021/10/6.
//

#include "iostream"

using namespace std;

class Animal{};

class Sheep:public Animal{};

class Tuo:public Animal{};


// c++ 中默认的继承是私有继承，基类的公共成员，保护成员会变成私有
class SheepTuo:public Sheep,public Tuo{};


int main()
{

    return 0;
}