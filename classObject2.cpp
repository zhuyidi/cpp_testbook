/*************************************************************************
	> File Name: classObject2.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 17 Mar 2017 11:04:57 AM CST
 ************************************************************************/

#include<iostream>
#include<string.h>

using namespace std;

class Student{
    private:
    int number;
    char *name;
    float score;

    public:
    Student(int number1, char *name1, float score1);
    ~Student();
    void modify(float score1){score = score1;}
    void print();
};

Student::Student(int number1, char *name1, float score1){
    number = number1;
    name = new char[sizeof(name1)];
    strcpy(name, name1);
    score = score1;
}

Student::~Student(){
    delete [] name;
}

void Student::print(){
    cout << "number: " << number << "name: " << name << "score: " << score << endl;
}

int main(void){
    int numberi;
    char namei[15];
    float scorei;

    cout << "enter number:";
    cin >> numberi;
    cout << "enter name:";
    cin >> namei;
    cout << "enter score:";
    cin >> scorei;
    Student stu1(numberi, namei, scorei);

    cout << "enter number:";
    cin >> numberi;
    cout << "enter name:";
    cin >> namei;
    cout << "enter score:";
    cin >> scorei;
    Student stu2(numberi, namei, scorei);
    stu2.modify(87);

    stu1.print();
    stu2.print();

    return 0;
}
