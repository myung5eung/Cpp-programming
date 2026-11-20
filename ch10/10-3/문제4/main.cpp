#include "Erase.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    Erase e;
    vector<int> v;

    cout << "숫자를 입력하세요: ";
    e.input(v);
    cout << "초기 벡터 원소: ";
    e.print(v);
    cout << "음수를 삭제 후 벡터원소 : ";
    e.minerase(v);
    e.print(v);

    cout << "평균값: " << e.avg(v) << endl;

    return 0;
}
