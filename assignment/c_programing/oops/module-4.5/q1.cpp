#include <iostream>
using namespace std;

template <typename t>
void swap_Values(t& a, t& b) {
    t temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    int p = 1.5, q = 2.5;

    cout << "before swap:" << endl;
    cout << "x: " << x << ", y: " << y << endl;
    cout << "p: " << p << ", q: " << q << endl;

    swap_Values(x, y);
    swap_Values(p, q);

    cout << "after swap:" << endl;
    cout << "x: " << x << ", y: " << y << endl;
    cout << "p: " << p << ", q: " << q << endl;

    return 0;
}
