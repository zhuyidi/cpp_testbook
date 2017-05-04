/*************************************************************************
	> File Name: car.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 05 Apr 2017 11:14:59 AM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
    string NO;//编号
public:
    Vehicle(string n){				    NO = n;  }
    virtual int fee()=0;//计算应收费用
};

/* 请在这里填写答案 */

class Car : public Vehicle{
    private:
    int guest;
    int weight;

    public:
    Car(string n, int gue, int wei) : Vehicle(n) {guest = gue; weight = wei;}
    int fee(){return guest*8 + weight*2;}
};

class Truck : public Vehicle{
    private:
    int weight;

    public:
    Truck(string n, int wei) : Vehicle(n){weight = wei;}
    int fee(){return weight*5;}
};

class Bus : public Vehicle{
    private:
    int guest;

    public:
    Bus(string n, int gue) : Vehicle(n){guest = gue;}
    int fee(){return guest*3;}
};

int main()
{
    Car c("",0,0);
    Truck t("",0);
    Bus b("",0);
    int i, repeat, ty, weight, guest;
    string no;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        cin>>ty>>no;
        switch(ty){
            case 1: cin>>guest>>weight; c=Car(no, guest, weight); cout<<no<<' '<<c.fee()<<endl; break;
            case 2: cin>>weight; t=Truck(no, weight); cout<<no<<' '<<t.fee()<<endl; break;
            case 3: cin>>guest; b=Bus(no, guest); cout<<no<<' '<<b.fee()<<endl; break;
        }
    }
    return 0;
}
