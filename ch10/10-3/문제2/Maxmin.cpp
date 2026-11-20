#include "Maxmin.hpp"
#include <iostream>
using namespace std;

void Maxmin::input(vector<int>& v) {
    int n;
    for (int i = 0; i < 4; i++) { 
        cin >> n;
        v.push_back(n);
    }
}

int Maxmin::findMax(vector<int>& v) {
    vector<int>::iterator it = v.begin();
    int max = *it;
    for (it = v.begin(); it != v.end(); it++) {
        if (max < *it) max = *it;
    }
    return max;
}

int Maxmin::findMin(vector<int>& v) {
    vector<int>::iterator it = v.begin();
    int min = *it;
    for (it = v.begin(); it != v.end(); it++) {
        if (min > *it)
            min = *it;
    }

    return min;
}
