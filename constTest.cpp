/*************************************************************************
	> File Name: constTest.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 10 Mar 2017 11:23:57 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A
{
    int data;
    double twoData;

    public:

    int change(const int &num);
    int againChang(int num) const;
};

int A::change(const int &num)
{

    data = num;
    data += 1;

    return num;
}

int A::againChang(int num) const
{
    //data = data + 2;  //使用const修饰类的方法函数的函数定义后, 该函数成员将不能改变该类中的任何数据成员,
    //twoData += 1;     //来保护数据成员不被篡改.
    num = num + 2;

    return data;
}

int main(void)
{
    A a;

    cout << a.change(10) << endl;

    return 0;
}
