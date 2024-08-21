 #include <iostream>
using namespace std;

class Rectangle {
private:
    int length; 
    int width;  

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    void set_dimensions(int l, int w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "length and width must be positive!" << endl;
        }
    }

    int get_length() {
        return length;
    }

    int get_width() {
        return width;
    }

    int calculate_area() {
        return length * width;
    }

    int calculate_perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    int length, width;
    
    cout << "enter the length of the rectangle: ";
    cin >> length;
    cout << "enter the width of the rectangle: ";
    cin >> width;

    Rectangle myRectangle(length, width);

    cout << "length: " << myRectangle.get_length() << endl;
    cout << "width: " << myRectangle.get_width() << endl;
    cout << "area: " << myRectangle.calculate_area() << endl;
    cout << "perimeter: " << myRectangle.calculate_perimeter() << endl;

    return 0;
}

5]
 #include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setValues(string person_name, int person_age, string person_country) {
        name = person_name;
        age = person_age;
        country = person_country;
    }

    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    string get_country() {
        return country;
    }
};

int main() {
    Person person;

    person.setValues("nihar", 19, "india");

    cout << "name: " << person.get_name() << endl;
    cout << "age: " << person.get_age() << endl;
    cout << "country: " << person.get_country() << endl;

    return 0;
}

