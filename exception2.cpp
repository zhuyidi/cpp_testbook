/*************************************************************************
	> File Name: exception2.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 09 Jun 2017 11:36:53 AM CST
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

void mySqrt(double x);

void mySqrt(double x){
    const char *s = "Error: Can not take sqrt of negative number";
    if(x < 0){
        throw s;
    }
    cout << "The sqrt of " << x << " is " << sqrt(x) << endl;
}

int main(void){
    double num;
    cin >> num;

    try{
        mySqrt(num);
    }catch(const char *s){
        cout << s <<endl;
    }

    return 0;
}
