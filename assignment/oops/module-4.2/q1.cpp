 #include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int subtract(int a, int b) {
        return a - b;
    }
    
    int multiply(int a, int b) {
        return a * b;
    }
    
    int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "error: division by zero!" << endl;
            return 0; 
        }
    }
};

int main() {
    Calculator calc;
    int num1, num2;
    char sign;

    cout << "enter first number: ";
    cin >> num1;
    cout << "enter operator (+, -, *, /): ";
    cin >> sign;
    cout << "enter second number: ";
    cin >> num2;

    switch(sign) {
        case '+':
            cout << "result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "error: invalid operator!" << endl;
            break;
    }

    return 0;
}
