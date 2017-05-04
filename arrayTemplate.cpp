/*************************************************************************
	> File Name: arrayTemplate.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 12 Apr 2017 10:58:47 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
// 你提交的代码将嵌入到这里

template <typename T>

T Min(T *p, int len){
    int i = 0;
    int j = 0;
    T min = p[0];

    for(i = 0; i < len; i++)
    {
        if(p[i] < min){
            min = p[i];
        }
    }

    return min;
}

int main( )
{
    int n,m,*pn,i=0;
    cin>>n;
    pn=new int[n];
    do{
        cin>>pn[i];
        i++;
    }while(i<n);

    double *pd;
    i=0;
    cin>>m;
    pd=new double[m];
    do{
        cin>>pd[i];
        i++;
    }while(i<m);

    cout<<Min(pn,n)<<endl;
    cout<<Min(pd,m)<<endl;
    delete [ ] pn;
    delete [ ] pd;
    return 0;
}
