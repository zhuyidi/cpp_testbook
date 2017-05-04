/*************************************************************************
	> File Name: objectArray.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 29 Mar 2017 10:50:13 AM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Student{
    private:
    int room;
    string name;
    double height;
    double weight;

    public:
    Student(){};
    void input(int ro, string na, double hei, double wei);
    int getRoom(){return room;};
    string getName(){return name;};
    double getHeight(){return height;};
    double getWeight(){return weight;};
    
};

void Student::input(int ro, string na, double hei, double wei){
    room = ro;
    name = na;
    height = hei;
    weight = wei;
}


int main(void){
    int number;
    int i;
    int j;
    Student *student;
    Student *result;
    int count = 0;
    Student tmp;
    int room;
    string name;
    double height;
    double weight;

    cin >> number;
    student = new Student[number];
    result = new Student[number];

    for(i = 0; i < number; i++){
        cin >> room >> name >> height >> weight;
        student[i].input(room, name, height, weight);
    }

    for(i = 0; i < number; i++){
        for(j = i+1; j < number; j++){
            if(student[i].getRoom() > student[j].getRoom()){
                tmp = student[i];
                student[i] = student[j];
                student[j] = tmp;
            }
        }
    }

    result[count] = student[0];
    for(i = 0; i < number; i++){
        if(student[i].getRoom() != result[count].getRoom()){
            result[++count] = student[i];
        }else{
            if(student[i].getHeight() > result[count].getHeight()){
                result[count] = student[i];
            }
        }
    }

    for(i = 0; i < count+1; i++){
        cout << setw(6) << setfill('0') << result[i].getRoom() << " " << result[i].getName() << " " << result[i].getHeight() << " " << result[i].getWeight() << endl;
    }
}
