  #include <iostream>
using namespace std;

inline int multiple(int a, int b) {
    return a * b;
}

inline int cube(int value) {
    return value * value * value;
}

int main() {
    int num1, num2;

    cout << "enter two integers for multiplication: ";
    cin >> num1 >> num2;

    int multiplication_result = multiple(num1, num2);
    cout << "multiplication result: " << multiplication_result << endl;

    cout << "enter an integer to find its cubic value: ";
    cin >> num1;

    int cubic_result = cube(num1);
    cout << "cubic value: " << cubic_result << endl;

    return 0;
}
