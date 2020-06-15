#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <string>
#include <algorithm>
#include <functional>
#include "team.h"
using namespace std;
template <class T>
void print_container(const T& container, string s= " ") {
    cout << s << "(" << container.size() << ")";
    auto it = container.begin();
    for (; it != container.end(); it++) cout << *it << " ";
    cout << endl;
}

bool teamCmp_byName (const Team& a, const Team& b) {return a.name < b.name; }
struct TeamCmp_byVictory {
    bool operator() (const Team& a, const Team& b) {return a.victory < b.victory;}
};