/*************************************************************************
	> File Name: classObject4.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 17 Mar 2017 11:53:56 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Date{
    int d;
    int m;
    int y;

    public:
    int day()const{return d;}
    int month()const{return m;}
    int year()const;
};

inline int Date::year()const{
    //return y++;
    return y + 1;
}

int main(void){

    return 0;
}
