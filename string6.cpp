/*************************************************************************
	> File Name: string6.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Sat 25 Mar 2017 11:32:12 AM CST
 ************************************************************************/

// string::copy
#include <iostream>
#include <string>
using namespace std;
//int string::copy(char* s, int len, int pos = 0) const 函数原型
int main ()
{
  char ChangAn[20];
  string str ("Xi’an University of Post & Telecommunications");
  int length = str.copy(ChangAn,10,6);
  ChangAn[length]='\0';
  cout << "ChangAn contains: " << ChangAn << '\n';
  return 0;
}
