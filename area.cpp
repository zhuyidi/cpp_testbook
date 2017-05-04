/*************************************************************************
	> File Name: area.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 03 Mar 2017 10:42:33 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int area(int,int);
int area(int,int,int);

int area(int a, int b)
{
    int s;

    s = a * b;
    
    return s;
}

int area(int a, int b, int c)
{
    int s;

    s = 2 * (a * b + b * c + a * c);

    return s;
}

int main()
{
    int i, repeat, c, x, y, z;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        cin>>c;
        if(c==2){
            cin>>x>>y;
            cout<<area(x,y)<<endl;
        }
        if(c==3){
            cin>>x>>y>>z;
            cout<<area(x,y,z)<<endl;
        }
    }
    return 0;
}

