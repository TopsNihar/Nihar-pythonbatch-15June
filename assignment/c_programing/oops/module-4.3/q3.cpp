 #include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    Car(string c, string m, int y) : company(c), model(m), year(y) {}

    void setCompany(string c) {
        company = c;
    }

    string getCompany() {
        return company;
    }

    void setModel(string m) {
        model = m;
    }

    string getModel() {
        return model;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car myCar("toyota", "camry", 2020);

    cout << "car information:" << endl;
    cout << "company: " << myCar.getCompany() << endl;
    cout << "model: " << myCar.getModel() << endl;
    cout << "year: " << myCar.getYear() << endl;

    myCar.setCompany("honda");
    myCar.setModel("accord");
    myCar.setYear(2022);

    cout << "\nupdated information:" << endl;
    cout << "company: " << myCar.getCompany() << endl;
    cout << "model: " << myCar.getModel() << endl;
    cout << "year: " << myCar.getYear() << endl;

    return 0;
}
