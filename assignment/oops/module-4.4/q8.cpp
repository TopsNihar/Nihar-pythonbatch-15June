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

    float divide(int a, int b) {
        if (b != 0) {
            return static_cast<float>(a) / b;
        } else {
            cout << "division by zero error!" << endl;
            return 0.0;
        }
    }
    
};

int main() {
    Calculator calc;

    cout << "addition of 5 and 3 : " << calc.add(5, 3) << endl;

    cout << "subtraction of 10 from 20 : " << calc.subtract(20, 10) << endl;
  
    cout << "multiplication of 4 and 5 : " << calc.multiply(4, 5) << endl;
    
    cout << "division of 20 by 4 : " << calc.divide(20, 4) << endl;
    
    return 0;
}
