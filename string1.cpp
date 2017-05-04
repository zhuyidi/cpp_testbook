/*************************************************************************
	> File Name: string1.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Sat 25 Mar 2017 11:30:47 AM CST
 ************************************************************************/

// comparing size, length, capacity and max_size
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string str ("Test string");
  cout << "size: " << str.size() << "\n";
  cout << "length: " << str.length() << "\n";
  cout << "capacity: " << str.capacity() << "\n";
  cout << "max_size: " << str.max_size() << "\n";
  return 0;
}
