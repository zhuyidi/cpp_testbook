/*************************************************************************
	> File Name: integerList.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Thu 04 May 2017 10:32:17 PM CST
 ************************************************************************/

#include<iostream>
#include<list>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(void){
    list<int> num;
    list<int>::iterator p;

    num.push_back(2);
    num.push_back(1);
    num.push_back(4);
    num.push_back(3);

    num.sort();
    p = num.begin();

    while(p != num.end()){
        cout << *p << endl;
        p++;
    }

    return 0;
}
