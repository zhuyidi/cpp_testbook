/*************************************************************************
	> File Name: classTest.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 10 Mar 2017 10:52:19 AM CST
 ************************************************************************/
#include <iostream>
using namespace std;
//你提交的代码将嵌入到这里

class Rectangle
{
    double width;
    double height;

    public : 
    void set(double wid, double hei);
    double getArea();
    double getPerimeter();
};

void Rectangle::set(double wid, double hei)
{
    width = wid;
    height = hei;
}

double Rectangle::getArea()
{
    return width * height;
}

double Rectangle::getPerimeter()
{
    return 2 * (width + height);
}

int main()
{    
    double m,n;
    cin>>m;
    cin>>n;
    Rectangle a;
    a.set(m,n);
    cout<<a.getArea()<<endl;
    cout<<a.getPerimeter()<<endl;
    return 0;
}
