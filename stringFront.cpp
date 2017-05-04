/*************************************************************************
	> File Name: stringFront.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 29 Mar 2017 11:43:43 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(void){
    string str;
    string str1;
    string str2;
    string result;
    int i;
    int j;
    int index;
    int len;
    
    while(getline(cin, str))
    {
        //getline(cin, str);
        index = str.find_first_of(" ", 0);
        str1 = str.substr(0, index);
        str2 = str.substr(index+1, str.length());
        len = str1.length() < str2.length() ? str1.length() : str2.length();
        
        for(i = 0; i < len; i++)
        {
            if(str1[0] != str2[0])
            {
                cout << "No common prefix" << endl;
                break;
            }

            if(str1[i] != str2[i])
            {
                result = str1.substr(0, i);
                cout << "The common prefix is " << result << endl;
                break;
            }
            
            if(i == len - 1)
            {
                result = str1.substr(0, len);
                cout << "The common prefix is " << result << endl;
            }
        }
    }
    return 0;
}
