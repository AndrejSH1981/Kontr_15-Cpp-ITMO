#pragma once
#include <string>

using namespace std;

class Id {
private:
    int number;
    string dopInf;
public:
    Id();
    Id(int);
    Id(int, string);

    int getNumber();
    string get_dopInf();
};
