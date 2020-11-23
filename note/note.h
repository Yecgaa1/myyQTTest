
#ifndef _PERSON_H_
#define _PERSON_H_  //约定俗成的保护机制

#include <iostream>
#include <vector>  //向量，动态数组可扩容
#include <string>
using namespace std;

class Info   //定义一个类
{
private:
    int id;
    string name;
    string tel;
    string addr;
public:
    Info();
    ~Info(); //析构函数，善后作用
    static int count; //记录通讯录中的人数
    int GetId();
    void insert();
};

#endif//#endif     //头文件结尾
//把头文件的内容都放在#ifndef和#endif中
//一般格式是这样的：
//
//#ifndef <标识>
//#define <标识>
//
//......
//......
//
//#endif