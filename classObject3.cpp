/*************************************************************************
	> File Name: classObject3.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 17 Mar 2017 11:42:25 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Rectangle{
    double length;
    double width;

    public:
    Rectangle(double len, double wid);
    double getArea();
};

Rectangle::Rectangle(double len, double wid){
    length = len;
    width = wid;
}

double Rectangle::getArea(){
    return length * width;
}

int main(void){
    double len;
    double wid;

    cout << "请输入矩形的长和宽:";
    cin >> len >> wid;

    Rectangle rec(len, wid);
    cout << "矩形的面积为: " << rec.getArea() << endl; 

    return 0;
}
