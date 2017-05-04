/*************************************************************************
	> File Name: integerQueue.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Thu 04 May 2017 10:44:30 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

int main(void){
    queue<int> num;

    for(int i = 0; i < 3; i++){
        num.push(i);
    }

    while(!num.empty()){
        cout << num.front() << endl;
        num.pop();
    }

    return 0;
}
