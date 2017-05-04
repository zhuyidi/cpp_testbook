/*************************************************************************
	> File Name: stringFind.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 22 Mar 2017 10:55:52 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void){
    string str;
    string tmp;
    string str1;
    string str2;
    int find;

    while(1)
    {
        getline(cin, tmp);
        if(!tmp.compare("end"))
        {
            break;
        }

        str.append(tmp);
    }
    
    //cin >> str1 >> str2;
    getline(cin, str1);
    getline(cin, str2);

    find = str.find(str1);
    
    while(find != -1)
    {
        str.replace(find, str1.length(), str2);
        find = str.find(str1);
    }

    cout << str;

}
