#include "Word.hpp"
#include <iostream>
#include <string>
using namespace std;

void Word::input(vector<string>& v){
    string s;
    for(int i=0; i<5; i++)
    {
        cout<<"문자열을 입력하세요: ";
        getline(cin, s);
        v.push_back(s);
    }
}
string Word::findMax(vector<string>& v){
    vector<string>::iterator it = v.begin();
    string ms=*it;
    for( it=v.begin(); it!= v.end(); it++)
    {
        if(ms<*it) ms=*it;
    }
    return ms;
}
