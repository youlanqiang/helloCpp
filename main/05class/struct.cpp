#include<iostream>

using namespace std;

//几种定义结构体的写法

//声明写法: struct student stu1 = ...
struct student //32
{
    string name; //24byte  = 192bit
    int age; //4byte  = 32bit
    int score; //4byte = 32bit
};

//定义结构体，顺便定义结构体类型变量
struct student2{ //student2 为结构体类型
    string name;
    int age;
    int score;
} s1, s2;

//定义结构体，但不声明结构体类型
struct{
    string name;
    int age;
    int score;
} p1, p2;

// 仅在C语言中
// 使用typedef定义结构体，声明变量可以不带struct关键字
// stu s1 = ...
typedef struct{
    string name;
    int age;
    int score;
} stu;


int main()
{
   
    const int arr_length = 3;
    // 结构体数组
    student arr[arr_length] = { 
       {"nimo",18, 80}, {"jack", 18, 100}, {"lisa", 18, 90}
    };

    cout<< sizeof(string) <<endl;
    for (int i = 0; i < sizeof(arr); i++){
        cout<< arr[i].name << arr[i].age << arr[i].score<<endl;
    }

    return 0;
}



