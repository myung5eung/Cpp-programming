#include "Erase.hpp"
#include <iostream>
using namespace std;
void Erase::input(vector<int>& v){
    int n;
        for (int i = 0; i < 5; i++) { 
            cin >> n;
            v.push_back(n);
        }
}
void Erase::print(vector<int>& v){
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
}
void Erase::minerase(vector<int>& v){
    vector<int>::iterator it = v.begin();
    for (it = v.begin(); it != v.end(); ){
        if (*it < 0) it = v.erase(it);
        else it++;
    }
}
double Erase::avg(vector<int>&v){
    vector<int>::iterator it = v.begin();
    double a=0.0;
    for (it = v.begin(); it != v.end(); it++)
        a+=*it;
    return a/v.size();
}
