 #include <iostream>
using namespace std;

class calculator {
private:
    int num1;
    int num2;

public:
    calculator(int a, int b) : num1(a), num2(b) {}

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiple() {
        return num1 * num2;
    }

    int divide() {
        if (num2 != 0) {
            return static_cast<int>(num1) / num2;
        } else {
            cout << "error: division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    int a, b;

    cout << "enter two integers: ";
    cin >> a >> b;

    calculator calc(a, b);

    cout << "addition: " << calc.add() << endl;
    cout << "subtraction: " << calc.subtract() << endl;
    cout << "multiplication: " << calc.multiple() << endl;
    cout << "division: " << calc.divide() << endl;

    return 0;
}
