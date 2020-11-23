//
// Created by yao on 2020/11/18.
//
#include "note.h"  //把头文件的内容包含到当前文件中
vector<Info> per;  //per是Info类中的对象
int Info::count = 0;//初始化类成员count，::此处为作用域符号
int Info::GetId()  //表示GetID()函数是类Info的成员函数
{
    return id;
}
void Info::insert()//表示insert()函数是类Info的成员函数
{
    Info tmp; //在Info类中定义函数tmp
    vector<Info>::iterator it;//iterator是Info类中的函数，it是变量
    loop:
    count++;//使ID分别为1，2，3.......
    cout << "ID: " << count << endl;
    tmp.SetName();  //定义tmp中的SetName函数
    for(it = per.begin(); it != per.end(); ++it
    //当it变量为 per.begin()输出的值，不是per.end()，让it变量加一
    {
        if(!((it->GetName()).compare(tmp.GetName())))
        //->是为了让it调用GetName()中成员，用compare函数将刚输入的tmp.GetName与之对比
        {
            cout << "与已有联系人重名，请重新输入。" << endl;
            count--; //重名了，就取消这次的count++
            goto loop;//与15行的loop:为一个loop循环
        }
    }
    tmp.SetTel();
    tmp.SetAddr(); //分别定义tmp类里的这两个函数
    tmp.id = count;//让id=count

    per.push_back(tmp);//调用per类里的push_back函数中的tmp变量


    cout << "是否继续添加联系人 y/n ：";
    char ch;
    cin >> ch;
    if('y' == ch || 'Y' == ch)//此处表示y的大小写都可以
    {
        goto loop//建议改为loop2，最好不用loop
    }

}