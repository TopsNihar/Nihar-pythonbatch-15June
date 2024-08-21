#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employee_id;
    int salary;

public:
    Employee(const string& emp_name, int emp_id, int initial_salary) 
        : name(emp_name), employee_id(emp_id), salary(initial_salary) {}

    void set_salary_based_on_performance(int performance_rating) {
        if (performance_rating > 4.5) {
            salary *= 1.20; 
        } else if (performance_rating >= 3.0) {
            salary *= 1.10; 
        } else {
            salary *= 1.05; 
        }
    }

    void displayDetails() {
        cout << "employee name: " << name << endl;
        cout << "employee id: " << employee_id << endl;
        cout << "salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("Nihar Nakrani", 1001, 50000.00);

    cout << "initial employee details:" << endl;
    emp.displayDetails();

    int performance_rating;
    cout << "enter performance rating (0.0 to 5.0): ";
    cin >> performance_rating;
    emp.set_salary_based_on_performance(performance_rating);

    cout << "\nupdated employee details:" << endl;
    emp.displayDetails();

    return 0;
}
