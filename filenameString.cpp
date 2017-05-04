/*************************************************************************
	> File Name: filenameString.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 22 Mar 2017 11:41:36 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string allName;
    string dirName;
    string fileName;
    int start;

    //文件路径中可能含有空格, 所以输入的时候应该用getline()函数, 以确保换行符来区别一串字符串
    //cin >> allName;
    getline(cin, allName);
    
    //文件路径不仅是linux下的, 也有可能是windows下的
    //start = allName.rfind("/", allName.length());
    start = allName.find_last_of("/\\");

    fileName = allName.substr(start + 1, allName.length());
    dirName = allName.substr(0, start);
    cout << dirName << endl;
    cout << fileName;

}
