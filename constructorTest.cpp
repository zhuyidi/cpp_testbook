/*************************************************************************
	> File Name: constructorTest.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 15 Mar 2017 10:43:59 AM CST
 ************************************************************************/

#include <iostream> 
using namespace std;  
// 你提交的代码将被嵌入到这里

class Triangle
{
    double width;
    double heigth;

    public:
    Triangle(double wid, double hei);
    double getArea();
};

Triangle::Triangle(double wid, double hei)
{
    width = wid;
    heigth = hei;
}

double Triangle::getArea()
{
    return width * heigth / 2;
}

int main( )
{
  double w,h;
    cin>>w>>h;
  Triangle t(w,h);
  cout<<"The area of the Triangle is: "<<t.getArea( )<<endl;
}


