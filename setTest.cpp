/*************************************************************************
	> File Name: setTest.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 28 Apr 2017 11:03:09 AM CST
 ************************************************************************/

#include<iostream>
#include<set>
using namespace std;

int main(void){
    set<string> result;
    int count = 0;
    string temp;
    set<string>::iterator p;

    while(count < 2){
        getline(cin, temp);
        if(temp == "end"){
            count++;
            continue;
        }
        result.insert(temp);
    }
    
    p = result.begin();
    while(p != result.end()){
        cout << *p << endl;
        p++;
    }

    return 0;

}
