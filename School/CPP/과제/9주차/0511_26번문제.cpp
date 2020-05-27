//해밍거리
#include <iostream>
#include <fstream>
#include <cstdlib>
#define XOR(a,b) (!(a)^!(b))
using namespace std;
class MyBinaryNumber
{
public:
 // constructors
 MyBinaryNumber ();
 MyBinaryNumber (unsigned int val);
 // accessor/mutator functions
 unsigned int getValue() const;
 void setValue(unsigned int val);
 // utility function
 int getHammingWeight() const;
 int getHammingDistance(const MyBinaryNumber& bn) const;
private:
 unsigned int value;
};

// constructors
MyBinaryNumber::MyBinaryNumber ()
:value(0)
{
}
MyBinaryNumber::MyBinaryNumber (unsigned int val)
:value(val)
{
}
// accessor functions
unsigned int MyBinaryNumber::getValue () const
{
 return value;
}
// mutator functions
void MyBinaryNumber::setValue (unsigned int val)
{
 value = val;
}
// 어떤 정수의 해밍 무게를 계산하는 함수
int MyBinaryNumber::getHammingWeight() const
{
    int v = getValue();
    int cnt = 0;
    while (v >= 1) {
        if (v % 2 == 1) {
            cnt++;
        }
        if (v == 1) break;
        v /= 2;
    }
    return cnt;
}
// comptue Hamming Distance
int MyBinaryNumber::getHammingDistance(const MyBinaryNumber& bn) const
{
    int v1 = getValue();
    int v2 = bn.getValue();
    int cnt = 0;
    for (int i=0; i<31; i++) {
        if ((v1 & (1 << i)) != (v2 & (1 << i))) {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
 int numTestCases;
 cin >> numTestCases;
 for(int i=0; i<numTestCases; i++)
{
 unsigned int num1, num2;
 cin >> num1 >> num2;
 MyBinaryNumber bn1(num1), bn2(num2);
 cout << bn1.getHammingWeight() << " " << bn2.getHammingWeight() << " "
 << bn1.getHammingDistance(bn2) << endl;
 }
return 0;
}