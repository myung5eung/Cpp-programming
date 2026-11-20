#include "Maxmin.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Maxmin m;
    vector<int> v;
    cout << "정수 4개를 입력하시오: ";
    m.input(v);
    cout << "최대값은 " << m.findMax(v) <<", 최소값은 " << m.findMin(v)<< "입니다. " << endl;
    return 0;
}
