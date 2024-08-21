#include <iostream>
using namespace std;

class AreaCalculator {
public:
    int area(int radius) {
        const int PI = 3.14;
        return PI * radius * radius;
    }

    int area(int length, int breadth) {
        return length * breadth;
    }

    int area(int base, int height, int isTriangle) {
        return 0.5 * base * height;
    }
};

int main() {
    AreaCalculator calculator;

    int radius = 5.0;
    int length = 10.0;
    int breadth = 4.0;
    int base = 8.0;
    int height = 6.0;

    cout << "area of circle with radius " << radius << " is: " << calculator.area(radius) << endl;
    cout << "area of rectangle with length " << length << " and breadth " << breadth << " is: " << calculator.area(length, breadth) << endl;
    cout << "area of triangle with base " << base << " and height " << height << " is: " << calculator.area(base, height, true) << endl;

    return 0;
}
