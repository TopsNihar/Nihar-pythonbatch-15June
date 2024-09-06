 #include <iostream>
using namespace std;


class Triangle {
private:
    int side1;
    int side2;
    int side3;

public:
    Triangle(int s1, int s2, int s3) : side1(s1), side2(s2), side3(s3) {}

    void determine_and_print_type() {
        if (side1 == side2 && side2 == side3) {
            cout << "the triangle is equil." << endl;
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            cout << "the triangle is isoscel." << endl;
        } else {
            cout << "the triangle is scalene." << endl;
        }
    }
};

int main() {
    Triangle t1(5.0, 5.0, 5.0);   
    Triangle t2(5.0, 5.0, 8.0);   
    Triangle t3(5.0, 6.0, 7.0);   

    cout << "Triangle t1: ";
    t1.determine_and_print_type();
    
    cout << "Triangle t2: ";
    t2.determine_and_print_type();
    
    cout << "Triangle t3: ";
    t3.determine_and_print_type();

    return 0;
}
