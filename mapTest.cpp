/*************************************************************************
	> File Name: mapTest.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 28 Apr 2017 11:36:22 AM CST
 ************************************************************************/

#include<iostream>
#include<map>
using namespace std;

int main(void){
    map<string, double> score;
    string name;
    double num;
    string index;
    map<string, double>::iterator p;

    cin >> name;
    while(name != "noname"){
        cin >> num;
        score.insert(pair<string, double>(name, num));
        cin >> name;
    }

    cin >> index;
    
    p = score.find(index);
    if(p != score.end())
    {
        cout << (p->second)*0.21 << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    
    return 0;
}
