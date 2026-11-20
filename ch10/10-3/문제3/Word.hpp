#ifndef _WORD_HPP
#define _WORD_HPP
#include <vector>
#include <string>
using namespace std;

class Word{
    public:
        void input(vector<string>& v);
        string findMax(vector<string>& v);
};
#endif
