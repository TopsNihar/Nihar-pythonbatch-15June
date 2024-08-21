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
        getline(cin, name);
        cout << "enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void displayPersonData()  {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};

class Academic {
protected:
    int marks[5]; 
    int percentage;

public:
    void inputAcademicData() {
        cout << "enter marks for 5 subjects:" << endl;
        int total_marks = 0.0;
        for (int i = 0; i < 5; ++i) {
            cout << "subject " << (i + 1) << ": ";
            cin >> marks[i];
            total_marks += marks[i];
        }
        cin.ignore(); 
        percentage = (total_marks / (5 * 100)) * 100; 
    }

    void displayAcademicData()  {
        cout << "marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "percentage: " << percentage << "%" << endl;
    }
};

class MarkSheet : public Person, public Academic {
public:
    void inputMarkSheetData() {
        inputPersonData(); 
        inputAcademicData(); 
    }

    void displayMarkSheet()  {
        displayPersonData(); 
        displayAcademicData();
    }
};

int main() {
    MarkSheet student;

    student.inputMarkSheetData();

    cout << "\nstudent mark sheet:" << endl;
    student.displayMarkSheet();

    return 0;
}
