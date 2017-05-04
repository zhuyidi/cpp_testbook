/*************************************************************************
	> File Name: maxTemplate.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 12 Apr 2017 10:48:24 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
//你提交的代码将被嵌入到这里

template <typename T>

T Max(T a, T b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main( )
{
  int m,n;
  char c,d;
  string s1,s2;
  cin>>m>>n;
  cin>>c>>d;
  cin>>s1>>s2;
  cout<<Max(m,n)<<endl;
  cout<<Max(c,d)<<endl;
  cout<<Max(s1,s2)<<endl;
    return 0 ;
}
