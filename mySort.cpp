/*************************************************************************
	> File Name: Mysort.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 26 Apr 2017 10:54:26 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
//你提交的代码将被嵌入到这里

template <typename T>

void Mysort(T a[], int n){
    int i = 0;
    int j = 0;
    T tmp;

    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            if(a[i] < a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main()
{
    int m,n,a[20],i,j;
    float b[20];
    cin>>m;         
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    for(j=0;j<n;j++)
        cin>>b[j];
    Mysort(a,m); 
    Mysort(b,n);
    for(i=0;i<m;i++)
        cout<<a[i]<<' ';
    cout<<endl;
    for(j=0;j<n;j++)
        cout<<b[j]<<' ';
    cout<<endl;   
    return 0;   
}

