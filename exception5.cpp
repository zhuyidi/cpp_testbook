/*************************************************************************
	> File Name: exception5.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Tue 13 Jun 2017 05:37:58 PM CST
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;
void myterm() //自定义的运行终止函数
{
    cout<<"This is my terminater."<<endl;
    //...释放程序中申请的系统资源
    exit(1);
}
int main()
{
    //...}
    try{
        set_terminate(myterm);
        //...
        throw "Exception ... ";
    }
    catch(int i){ }
    return 0;
}
