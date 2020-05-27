//20191568 김은수
#include <iostream>
#include <cstring>
using namespace std;

class Kvector{
protected:
    int *m;
    int len;
public:
    // Kvector(int sz = 0, int value =0);
    // Kvector(const Kvector& v);
    Kvector(int sz = 0, int value = 0): len(sz) {
        cout << this << " : Kvector(" << sz << "," << value << ")\n";
        if (!sz){m = NULL; return;}
        m = new int[sz];
        for (int i = 0; i < sz; i++) m[i] =value;
    }
    Kvector(const Kvector& v) {
        cout << this << " : Kvector(*" << &v << ")\n";
        len = v.len;
        if (!len){ m = NULL; return;}
        m = new int[len];
        for (int i = 0; i<len; i++) m[i] = v.m[i];
    }
    friend int operator==(const Kvector& a, const Kvector& b);
    friend int operator!=(const Kvector& a, const Kvector& b);
    friend ostream& operator<<(ostream& os, const Kvector& v);
    // int& operator[](int i) {return m[i];};
    int& operator[](int i);
    const int& operator[] (int i) const {return m[i];};
    Kvector& operator=(const Kvector& v);
    static int total_len;
    virtual ~Kvector(){
        cout << this << " : ~Kvector() \n";
        delete[] m; 
    }
    void print() const {
        for (int i=0; i<len; i++) cout << m[i] << " ";
        cout << endl;
    }
    void clear() {
        delete[] m;
        m = NULL;
        len = 0;
    }
    int size() const {return len;}
};
int Kvector::total_len = 0;

// Kvector::Kvector(const int sz,const int value): len(sz){
//     if (sz == 0) {
//         clear();
//         return;
//     }
//     m = new int[sz];
//     // len = sz;
//     for (int i=0; i<len; i++) {
//         m[i] = value;
//         total_len++;
//     }
//     cout << "Kvector(int, int)" << endl;
// }
// Kvector::Kvector(const Kvector &v) {
//     m = new int[v.len];
//     len = v.size();
//     for (int i=0; i<len; i++) {
//         m[i] = v.m[i];
//         total_len++;
//     }
//     cout << "Kvector(Kvector&)" << endl;
// }

Kvector& Kvector::operator=(const Kvector& v) {
    if (&v != this) {
        m = new int[v.len];
        len = v.len;
        for (int i=0; i<len; i++) {
            m[i] = v.m[i];
        }
    }
    return *this;
}

int operator==(const Kvector& a, const Kvector& b) {
    int cnt=0;
    int alen = a.len;
    int blen = b.len;
    if (alen != blen) {
        return 0;
    }
    for (int i=0; i<alen; i++) {
        if (a.m[i] != b.m[i]) {
            return 0;
            break;
        }
    }
    return 1;
}

int operator!=(const Kvector& a, const Kvector& b) {
    if (a == b) {
        return 0;
    } else {
        return 1;
    }
}

int& Kvector:: operator[](int i) {return m[i];}; 

ostream& operator<<(ostream& os, const Kvector& v) {
    for (int i=0; i<v.size(); i++) {
        os << v.m[i] << " ";
    }
    return os;
}

#define N 3
class Avector : public Kvector{
    char *table;
    int table_len;
public:
    Avector(int sz=0, int v=0, const char *t="abc"): Kvector(sz, v) {
        cout << this << " : Avector(" << sz << "," << v << ",\"" << t << "\")\n";
        table_len = strlen(t);
        table = new char[table_len+1];
        strcpy(table, t);
        // setTable(t);
    }
    Avector(const Avector& v) : Kvector(v) {
        cout << this << " : Avector(*" << &v << ")\n";
        setTable(v.table);
    }
    ~Avector(){
        cout << this << " : ~Avector() \n";
        delete[] table;
    }

    void setTable(const char *t) {
        // for (int i=0; i<N; i++) {
        //     table[i] = t[i];
        // }
        delete[] table;
        table_len = strlen(t);
        table = new char[table_len+1];
        strcpy(table, t);
    }
    Avector& operator=(const Avector& v) {
        setTable(v.table);
        this->Kvector::operator=(v);
        return *this;
    }
    friend ostream& operator<<(ostream& os, const Avector& v);
};

ostream& operator<<(ostream& os, const Avector& v) {
    for (int i=0; i<v.size(); i++) {
        os << v.table[v.m[i]%N] << " ";
    }
    return os;
}

int main(int argc, char *argv[]) {
    Avector v(3,1,"abc"); v.print();
    Avector *p = new Avector(v); p->print();
    Kvector *kp = new Avector(2,5,"xyz"); kp->print();
    delete kp;
    delete p;
    return 0;
}

// int main(int argc, char *argv[]) {
//     if (argc != 2) {
//         cout << "usage : ./avector pqr\n";
//         return 1;
//     }
//     Avector v1(3); v1.print();
//     Avector v2(2,1, "xyz"); v2.print();
//     Avector v3(v2); v3.print();
//     cout << "v1 == v2 " << (v1 == v2) << endl;
//     cout << "v3 == v2 " << (v3 == v2) << endl;
//     v3 = v2 = v1;
//     cout << "v1 : " << v1 << endl;
//     v1.print();
//     cout << "v2 : " << v2 << endl;
//     v2.print();
//     cout << "v3 : " << v3 << endl;
//     v3.print();
//     cout << "v3 != v2 " << (v3 != v2) << endl;
//     v1[2] = 2;
//     v2[0] = v1[2];
//     v1.setTable(argv[1]);
//     cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;
//     v1.print();
//     v2.print();
//     v3.print();
//     return 0;
// }



















// int main() {
//     Kvector v1(3); v1.print();
//     Kvector v2(2,9); v2.print();
//     Kvector v3(v2); v3.print();
//     cout << (v1 == v2) << endl;
//     cout << (v3 == v2) << endl;
//     v3 = v2 = v1;
//     cout << v1 << endl;
//     cout << v2 << endl;
//     cout << v3 << endl;
//     cout << (v3 != v2) << endl;
//     v1[2] = 2;
//     v2[0] = v1[2];
//     cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;
//     return 0;
// }