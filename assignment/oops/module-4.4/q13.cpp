#include <iostream>
using namespace std;

class Max_Find {
private:
    int num1, num2;

public:
    Max_Find(int a, int b) : num1(a), num2(b) {}

    friend int find_Max(const Max_Find& mf);

    void display() const {
        cout << "number 1: " << num1 << ", number 2: " << num2 << endl;
    }
};

int find_Max(const Max_Find& mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    Max_Find numbers(15, 25);

    numbers.display();

    int max_Number = find_Max(numbers);
    cout << "maximum number: " << max_Number << endl;

    return 0;
}
