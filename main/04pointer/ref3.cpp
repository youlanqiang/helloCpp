//
// Created by youla on 2021/9/8.
//

#include <iostream>

using namespace std;


int main()
{
    const int cInt = 30;
    int oneInt = 50;
    int &ref = oneInt; // T&<-T

    const int & rc1 = cInt;
    const int & rc2 = oneInt;
    const int & rc3 = ref;

    return 0;
}
