#include <iostream>
using namespace std;

class swap_num {
private:
    int a, b;

public:
    swap_num(int x, int y) : a(x), b(y) {}

    friend void swap(swap_num& s_n);

    void display() const {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

void swap(swap_num& s_n) {
    s_n.a = s_n.a + s_n.b;
    s_n.b = s_n.a - s_n.b;
    s_n.a = s_n.a - s_n.b;
}

int main() {
    swap_num numbers(10, 20);

    cout << "before swap: ";
    numbers.display();

    swap(numbers);

    cout << "after swap: ";
    numbers.display();

    return 0;
}
