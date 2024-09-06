#include <iostream>
using namespace std;

class Base {
private:
    int private_value;

protected:
    int protected_value;

public:
    int public_value;

    Base() : private_value(1), protected_value(2), public_value(3) {}

    void showPrivate() {
        cout << "base class private value: " << private_value << endl;
    }
};

class Derived : public Base {
public:
    void showValues() {
        cout << "derived class public Value: " << public_value << endl;
        cout << "derived class protected value: " << protected_value << endl;
        showPrivate();
    }
};

int main() {
    Derived obj;

    cout << "in main function, public value: " << obj.public_value << endl;

    obj.showValues();

    return 0;
}
