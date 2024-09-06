#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) : name(n), age(a) {}

    void inputPersonData() {
        cout << "enter name: ";
        getline(std::cin, name);
        cout << "enter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPersonData() const {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    Student(string n = "", int a = 0, float p = 0.0) : Person(n, a), percentage(p) {}

    void inputStudentData() {
        inputPersonData();
        cout << "enter percentage: ";
        cin >> percentage;
        cin.ignore(); 
    }

    void displayStudentData() const {
        displayPersonData(); 
        cout << "percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    Teacher(string n = "", int a = 0, float s = 0.0) : Person(n, a), salary(s) {}

    void inputTeacherData() {
        inputPersonData(); 
        cout << "enter salary: ";
        cin >> salary;
        cin.ignore(); 
    }

    void displayTeacherData() const {
        displayPersonData(); 
        cout << "salary: $" << salary <<endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "enter details for student:" << endl;
    student.inputStudentData();
    cout << "tudent details:" << endl;
    student.displayStudentData();

    cout << "enter details for teacher:" << endl;
    teacher.inputTeacherData();
    cout << "teacher details:" << endl;
    teacher.displayTeacherData();

    return 0;
}
