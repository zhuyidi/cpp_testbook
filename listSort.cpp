/*************************************************************************
	> File Name: listSort.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 28 Apr 2017 10:32:30 AM CST
 ************************************************************************/

#include<iostream>
#include<list>
#include<cstdlib>

using namespace std;

int main(void){
    int n = 0;
    int i = 0;
    list<string> name;
    string temp;
    list<string>::iterator p;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> temp;
        name.push_back(temp);
    }

    name.sort();
    p = name.begin();
    while(p != name.end()){
        cout << *p << endl;
        p++;
    }
    
    return 0;
}
