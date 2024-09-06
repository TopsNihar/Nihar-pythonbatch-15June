#include <iostream>
using namespace std;

class con_1 {
public:
    con_1() {
        cout << "1st Constructor" << endl;
    }
};

class con_2 : public con_1 {
public:
    con_2() {
        cout << "2nd Constructor" << endl;
    }
};

class con_3 : public con_2 {
public:
    con_3() {
        cout << "3rd Constructor" << endl;
    }
};

int main() {
    con_3 obj;
    return 0;
}
