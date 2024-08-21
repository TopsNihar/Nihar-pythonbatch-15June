#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string zip_code;

public:
    Address(const string& st, const string& ci, const string& stt, const string& zip)
        : street(st), city(ci), state(stt), zip_code(zip) {}

    void display_address() const {
        cout << "address: " << street << ", " << city << ", " << state << " - " << zip_code << endl;
    }
};

class Student {
private:
    string name;
    string class_name; 
    int roll_number;
    float marks;
    Address address; 

public:
    Student(const string& n, const string& c, int r, float m, const Address& addr)
        : name(n), class_name(c), roll_number(r), marks(m), address(addr) {}

    char calculate_grade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }

    void displaystudentinfo() const {
        cout << "name: " << name << endl;
        cout << "class: " << class_name << endl;
        cout << "roll number: " << roll_number << endl;
        cout << "marks: " << marks << endl;
        cout << "grade: " << calculate_grade() << endl;
        address.display_address(); 
    }
};

int main() {
    Address studentaddress("545 shyamdham", "nana varachha ", "surat", "395006");

    Student student("Nihar Nakrani", "B.sc", 101, 85.5, studentaddress);

    student.displaystudentinfo();

    return 0;
}
