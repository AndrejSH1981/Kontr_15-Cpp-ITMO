#include "Id.h"
#include <iostream>
#include <string>

using namespace std;

Id::Id(int n, string cat) {
    number = n;
    dopInf = cat;
}

int Id::getNumber() {
    return number;
}

string Id::get_dopInf() {
    return dopInf;
}
