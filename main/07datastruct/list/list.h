//
// Created by youlanqiang on 2021/12/4.
//

#ifndef HELLOCPP_LIST_H
#define HELLOCPP_LIST_H

// 定义结构体
typedef struct DYNAMICARRAY{
    int* pAddr; //存放数据的地址
    int size; //当前有多少个元素
    int capacity; //容量
}Dynamic_Array;


// 写一系列的相关对DYNAMICARRAY结构体操作的函数
// 初始化
Dynamic_Array* Init_Array();

// 插入
void Push_Back_Array(Dynamic_Array* arr, int value);

// 根据位置删除
void RemoveByPos_Array(Dynamic_Array* arr, int pos);

// 根据值删除
void RemoveByValue_Array(Dynamic_Array* arr, int value);

// 查找
int Find_Array(Dynamic_Array* arr, int value);

// 打印
void Print_Array(Dynamic_Array* arr);

// 释放动态数组的内存
void FreeSpace_Array(Dynamic_Array* arr);


#endif //HELLOCPP_LIST_H
