/*************************************************************************
	> File Name: exception1.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 09 Jun 2017 10:53:00 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
/* 你提交的代码将嵌入到这里 */


double hmean(double x, double y);

double hmean(double x, double y){
    const char *s = "bad hmean() arguments: a = -b not allowed";
    
    if(x + y == 0){
        throw s;
    }
    
    return 2*x*y / (x+y);
}

int main()
{
    double x, y;
    cin >> x >> y; 
    try {
          cout<<hmean(x,y);
    }
    catch (const char * s)
    {
        cout << s << endl;
    }
    return 0;
}
