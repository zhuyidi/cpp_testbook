/*************************************************************************
	> File Name: goodStudent.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 05 Apr 2017 11:44:21 AM CST
 ************************************************************************/

#include<iostream>
#include <string>
using namespace std;

/* 请在这里填写答案 */

class Student{
    protected:
    string num;
    string name;
    int s1;
    int s2;

    Student(string nu, string na, int sc1, int sc2){
        num = nu; name = na; s1 = sc1; s2 = sc2;
    }
};

int main()
{
    const int Size=50;
    string num, name;
    int i,ty,s1,s2,s3,s4,s5;
    char gs;
    Student *pS[Size];
    int count=0;
    for(i=0;i<Size;i++){
        cin>>ty;
        if(ty==0) break;
        cin>>num>>name>>s1>>s2;
        switch(ty){
             case 1:pS[count++]=new GroupA(num, name, s1, s2); break;
             case 2:cin>>gs; pS[count++]=new GroupB(num, name, s1,s2, gs); break;
             case 3:cin>>s3>>s4>>s5; pS[count++]=new GroupC(num, name, s1,s2,s3,s4,s5); break;
        }												
    }
    for(i=0;i<count;i++) {
        pS[i]->display();
        delete pS[i];
    }
    return 0;
}
