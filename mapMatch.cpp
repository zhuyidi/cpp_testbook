/*************************************************************************
	> File Name: mapMatch.cpp
	> Author: zhuyidi
	> Mail: 1311243087@qq.com
	> Created Time: Wed 03 May 2017 11:20:10 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(void){
    map<string, string> match;
    string team1;
    string team2;
    string index;
    map<string, string>::iterator p;
    
    match.insert(pair<string, string>("Australian", "Spain"));
    match.insert(pair<string, string>("Holland", "Chile"));
    match.insert(pair<string, string>("Cameroon", "Brazil"));
    match.insert(pair<string, string>("Croatia", "Mexico"));
    
    match.insert(pair<string, string>("Spain", "Australian"));
    match.insert(pair<string, string>("Chile", "Holland"));
    match.insert(pair<string, string>("Brazil", "Cameroon"));
    match.insert(pair<string, string>( "Mexico", "Croatia"));
    
    cin >> index;
    p = match.find(index);
    if(p != match.end()){
        cout << p->first << " team's rival is " << p->second << "." << endl;
    }
    else{
        cout << index << "'s team has no match today." << endl;
    }
}
