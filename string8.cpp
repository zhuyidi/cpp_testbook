/*************************************************************************
	> File Name: string8.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Sat 25 Mar 2017 11:32:24 AM CST
 ************************************************************************/

// comparing apples with apples
#include <iostream>
#include <string>
 
int main ()
{
  std::string str1 ("green apple");
  std::string str2 ("red apple");
 
  if (str1.compare(str2) != 0)
    std::cout << str1 << " is not " << str2 << '\n';
 
  if (str1.compare(6,5,"apple") == 0)
    std::cout << "still, " << str1 << " is an apple\n";
 
  if (str2.compare(str2.size()-5,5,"apple") == 0)
    std::cout << "and " << str2 << " is also an apple\n";
 
  if (str1.compare(6,5,str2,4,5) == 0)
    std::cout << "therefore, both are apples\n";
 
  return 0;
}
