/*************************************************************************
	> File Name: string2.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Sat 25 Mar 2017 11:31:52 AM CST
 ************************************************************************/

//  Demonstrate insert().
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  string str1("The website address of our university is:");
  string str2("www.xupt.edu.cn");
 
  cout << "Initial strings:\n";
  cout << "str1: " << str1 << endl;
  cout << "str2: " << str2 << "\n\n"; 
// demonstrate insert()
  cout << "Insert str1 into str2:\n";
  str2.insert(0,str1);
  cout << str2 << "\n\n";
}

