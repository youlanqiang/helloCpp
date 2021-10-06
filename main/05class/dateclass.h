//
// Created by youlanqiang on 2021/10/1.
//

#ifndef HELLOCPP_DATECLASS_H
#define HELLOCPP_DATECLASS_H

#include "iostream"

namespace date{

    class myDate{
        const int cYear; // cYear是静态成员对象
        int year;
        int month;
        int day;
    public:
        myDate();
        myDate(int day);
        ~myDate();
        //静态对象只能使用静态方法，访问静态成员对象
        int getCYear()const{
            return cYear;
        }

    };

    // 构造函数必须初始化 静态成员对象
    myDate::myDate() : cYear(0) {
        year = 2021;
        month = 10;
        day = 1;
    }

    // 这也是构造函数
    myDate::myDate(int day): year(2020), cYear(0) {}

    myDate::~myDate(){
        using namespace std;
        cout<< "调用析构函数" <<endl;
    }


}



#endif //HELLOCPP_DATECLASS_H
