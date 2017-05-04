/*************************************************************************
	> File Name: swapTemplate.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 26 Apr 2017 10:44:43 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T>

void Swap(T &a, T &b){
    T tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
 int i,j;
 char m,n;
 cin>>i>>j;
 cin>>m>>n;
 Swap(i,j);
 Swap(m,n);
 cout<<i<<' '<<j<<'\n';
 cout<<m <<' '<<n<<endl;
 return 0;
}

