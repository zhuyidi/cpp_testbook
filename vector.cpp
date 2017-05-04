/*************************************************************************
	> File Name: vector.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 19 Apr 2017 11:21:12 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

void load(vector<string>& v);
void print(vector<string> v);

void load(vector<string>& v){
    string name;

    //cin >> name;
    getline(cin, name);
    while(name.compare("end") != 0){
        v.push_back(name);
        //cin >> name;
        getline(cin, name);
    }
}

void print(vector<string> v){
    vector<string>::iterator p = v.begin();
    while(p != v.end()){
        cout << *p << " ";
        p++;
    }
}

int main(void){
    vector<string> v;
    load(v);
    sort(v.begin(), v.end());
    print(v);
    
    return 0;
}

