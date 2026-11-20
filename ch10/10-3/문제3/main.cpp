#include "Word.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    Word w;
    vector<string> v;
    w.input(v);
    cout << "사전에서 제일 뒤에 나오는 단어는 "<< w.findMax(v)<<" 입니다"<<endl;
    return 0;
}
