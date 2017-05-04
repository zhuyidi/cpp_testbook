/*************************************************************************
	> File Name: number.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 24 Mar 2017 11:16:57 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int check(string number);

int check(string number)
{
    int i = 0;


    if(number.length() != 11)
    {
        return 0;
    }

    for(i = 0; i != number.length(); i++)
    {
        if(number[i] < '0' && number[i] > '9')
        {
            return 0;
        }
    }

    if(number[0] != '1')
    {
        return 0;
    }

    return 1;
}

int main(void)
{
    string number;
    int mark;

    getline(cin, number);
    mark = check(number);

    if(mark == 1)
    {
        cout << "Yes"<< endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
