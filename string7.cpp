/*************************************************************************
	> File Name: string7.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Sat 25 Mar 2017 11:32:18 AM CST
 ************************************************************************/

// concatenating strings
#include <iostream>
#include <string>
 
main ()
{
  std::string firstlevel ("cn");
  std::string secondlevel ("edu");
  std::string thirdlevel("xupt");
  std::string scheme ("http://");
  std::string hostname;
  std:: string url;
 
  hostname = "www." + thirdlevel+ '.'+secondlevel + '.' + firstlevel;
  url = scheme + hostname;
 
  std::cout << url << '\n';
 
  return 0;
}
