/*************************************************************************
	> File Name: classObject2.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Fri 17 Mar 2017 11:04:57 AM CST
 ************************************************************************/

#include<iostream>
#include<string.h>

using namespace std;

class Score{
    public:
    float computer;
    float english;
    float math;
    Score(float x1, float y1, float z1);
    Score();
    void print();
    void modify(float x2, float y2, float z2);
};

Score::Score(float x1, float y1, float z1){
    computer = x1;
    english = y1;
    math = z1;
}

Score::Score(){
    
}

void Score::print(){
    cout << "computer score: " << computer << endl << "english score: " << english << endl << "math score: " << math << endl;
}

void Score::modify(float x2, float y2, float z2){
    computer = x2;
    english = y2;
    math = z2;
}

class Student{
    private:
    int number;
    char *name;
    float score;
    Score sc;

    public:
    Student(int number1, char *name1, Score sc1);
    ~Student();
    void modify(float score1){score = score1;}
    void print();
};

Student::Student(int number1, char *name1, Score sc1){
    number = number1;
    name = new char[sizeof(name1)];
    strcpy(name, name1);
    sc.computer = sc1.computer;
    sc.english = sc1.english;
    sc.math = sc1.math;
}

Student::~Student(){
    delete [] name;
}

void Student::print(){
    cout << "number: " << number << endl << "name: " << name << endl;
    sc.print();
}

int main(void){
    int numberi;
    char namei[15];
    Score scorei;

    cout << "enter number:";
    cin >> numberi;
    cout << "enter name:";
    cin >> namei;
    cout << "enter score(computer, english, math):";
    cin >> scorei.computer >> scorei.english >> scorei.math;
    Student stu1(numberi, namei, scorei);

    stu1.print();

    return 0;
}
