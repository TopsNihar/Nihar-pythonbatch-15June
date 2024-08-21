#include <iostream>
using namespace std;

class Rectangle {
protected:
    int length;
    int width;

public:
    Rectangle(int l = 0.0, int w = 0.0) : length(l), width(w) {}

    void inputDimensions() {
        cout << "enter length of the rectangle: ";
        cin >> length;
        cout << "enter width of the rectangle: ";
        cin >> width;
    }
    
    void displayDimensions() const {
        cout << "length: " << length << endl;
        cout << "width: " << width << endl;
    }
};

class AreaCalculator : public Rectangle {
public:
    AreaCalculator(int l = 0.0, int w = 0.0) : Rectangle(l, w) {}

    int calculateArea() const {
        return length * width;
    }
    
    void displayArea() const {
        cout << "area of the rectangle: " << calculateArea() << endl;
    }
};

int main() {
    AreaCalculator rect;

    rect.inputDimensions();
    
    rect.displayDimensions();
    
    rect.displayArea();

    return 0;
}
