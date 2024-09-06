 #include <iostream>
#include <cmath> 
using namespace std;

class Circle {
private:
    int radius; 

public:
    Circle(int r) : radius(r) {}

    void setradius(int r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "radius must be positive!" << endl;
        }
    }

    int getradius() {
        return radius;
    }

    int calculatearea() {
        return M_PI * radius * radius;
    }

    int calculatecircumference() {
        return 2 * M_PI * radius;
    }
};

int main() {
    int radius;
    
    cout << "enter the area of the circle: ";
    cin >> radius;

    Circle myCircle(radius);

    cout << "radius: " << myCircle.getradius() << endl;
    cout << "area: " << myCircle.calculatearea() << endl;
    cout << "circumference: " << myCircle.calculatecircumference() << endl;

    return 0;
}
