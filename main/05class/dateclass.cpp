//
// Created by youlanqiang on 2021/10/1.
//

#include "dateclass.h"
#include "iostream"

using namespace std;

int main()
{
    using namespace date;
    myDate *d1 = new myDate(4);
    delete d1;

    const myDate my;
    cout<<my.getCYear()<<endl;

    return 0;
}