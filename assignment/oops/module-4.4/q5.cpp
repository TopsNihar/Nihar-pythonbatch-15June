#include <iostream>
using namespace std;

class Students {
protected:
    int roll_number;

public:
    void setRollNumber(int r) {
        roll_number = r;
    }

    void displayRollNumber() const {
        cout << "roll number: " << roll_number << endl;
    }
};

class Test : public Students {
protected:
    int marks_1, marks_2;

public:
    void setMarks(int m1, int m2) {
        marks_1 = m1;
        marks_2 = m2;
    }

    void displayMarks() const {
        cout << "marks in subject 1: " << marks_1 << endl;
        cout << "marks in subject 2: " << marks_2 << endl;
    }
};

class Result : public Test {
public:
    void displayResult() const {
        int total_marks = marks_1 + marks_2;
        displayRollNumber();
        displayMarks();
        cout << "total marks: " << total_marks << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.setRollNumber(101);
    studentResult.setMarks(85, 90);

    cout << "student result:" << endl;
    studentResult.displayResult();

    return 0;
}
