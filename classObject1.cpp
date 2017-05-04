/*************************************************************************
	> File Name: classObject.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 17 Mar 2017 10:22:03 AM CST
 ************************************************************************/

#include<iostream>
#include<unistd.h>

using namespace std;

class counter
{
    int value;

    public:
    counter(int number);
    void incrcmcnt();   //给原值加1
    void decrement();   //给原值减1
    int getValue();     //取得计数器的值
    void print();       //显示计数器的值
};

counter::counter(int number)
{
    value = number;
}

void counter::incrcmcnt()
{
    value += 1;
}
void counter::decrement()
{
    value -= 1;
}

int counter::getValue()
{
    return value;
}

void counter::print()
{
    cout << getValue();
}

int main(void)
{
    int initNum = 0;
    char mark;

    cout << "请选择计数器类型(加法计数器按1, 减法计数器按2):";
    cin >> mark;

    cout << "请输入计数器的初始值:";
    cin >> initNum;
    counter cnt(initNum);

    cout << "开始计数...(当数值达到36000或0时,计数器停止计数)" << endl;
    cnt.print();
    cout << endl;

    if(mark == '1')
    {
        while(1)
        {
            if(++initNum > 3600)
            {
                break;    
            }
        
            cnt.incrcmcnt();
            cnt.print();
            cout << endl;
            sleep(1);
        }
    }
    else
    {
        while(1){
            if(--initNum < 0)
            {
                break;
            }
            cnt.decrement();
            cnt.print();
            cout << endl;
            sleep(1);
        }
    }

    return 0;
}
