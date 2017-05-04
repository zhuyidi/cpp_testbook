/*************************************************************************
	> File Name: funModel.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 24 Mar 2017 10:55:47 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
template <class T>
T m(T, int);

int main()
{
    int ty, task;
    cin>>ty;
    while(ty!=0)				{
        cin>>task;
        switch(ty){
            case 1:cout<<m(0,task)<<endl;break;
            case 2:cout<<m(0L,task)<<endl;break;
            case 3:cout<<m('0',task)<<endl;break;
            case 4:cout<<m(0.1, task)<<endl;
        }
       cin>>ty;
    }
    return 0;
}

template <class T>
T m(T mark, int task)
{
    T a;
    T b;

    cin >> a >> b;
    if(task == 1)
    {
        return (a > b ? a : b);
    }
    else
    {
        return (a < b ? a : b);
    }
}
