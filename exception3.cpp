/*************************************************************************
	> File Name: exception3.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Tue 13 Jun 2017 05:32:26 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;
int main( )
{ 
    int m,n;
    cout<<"Please input two integers:"; cin>>m>>n;
    try
    { 
        if (n==0) throw 0;
        cout<< (m/n)<<endl;
    }
    catch(int)
    {
        cout<<"Divided by 0!"<<endl;
        return -1;
    }
    return 0;
}

