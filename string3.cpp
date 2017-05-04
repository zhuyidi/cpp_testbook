/*************************************************************************
	> File Name: string3.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Sat 25 Mar 2017 11:31:57 AM CST
 ************************************************************************/

// string::erase
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  std::string str ("This is an example sentence.");
  std::cout << str << '\n';
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  std::cout << str << '\n';
                                           // "This is an sentence."
  str.erase (str.begin()+9);               //        ^
  std::cout << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  // ^^^^^
  std::cout << str << '\n';
                                           // "This sentence."
  return 0;
}
