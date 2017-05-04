/*************************************************************************
	> File Name: integerVector.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Thu 04 May 2017 09:39:51 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void load(vector<int> &v);
void print(vector<int> v);

void print(vector<int> v){
    vector<int>::iterator p = v.begin();
    
    while(p != v.end()){
        cout << *p << endl;
        p++;
    }
}
void load(vector<int> &v){
    for(int i = 0; i < 3; i++){
        v.push_back(i);
    }
}

int main(void){
    vector<int> v;
    load(v);
    sort(v.begin(), v.end());
    print(v);

    return 0;
}
