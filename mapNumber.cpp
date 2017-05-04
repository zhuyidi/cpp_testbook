/*************************************************************************
	> File Name: mapNumber.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 03 May 2017 11:00:57 AM CST
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(void){
    map<string, string> phone;
    string name;
    string number;
    string index;
    map<string, string>::iterator p;

    cin >> name;
    while(name != "noname"){
        cin >> number;
        phone.insert(pair<string, string>(name, number));
        cin >> name;
    }
   
    cin >> index;
    p = phone.find(index);
    if(p != phone.end()){
        cout << p->second << endl;
    }else{
        cout << "Not found" << endl;
    }

    return 0;
}
