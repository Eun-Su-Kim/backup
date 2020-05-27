#include <iostream>
#include <exception>
#include "Bvector.h"
class IncompatibleException : public std::exception{
    public:
        int num1, num2;
        IncompatibleException(int n1, int n2): num1(n1), num2(n2) {};
};

class BitSet : public Bvector{
    public:
        BitSet(int sz=32);
    void insert(int v);
    friend BitSet operator+(const BitSet& v1, const BitSet& v2);
    friend std::ostream& operator<<(std::ostream& os, const BitSet& s);
};