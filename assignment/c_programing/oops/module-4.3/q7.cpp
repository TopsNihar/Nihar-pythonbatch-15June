#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    int days_in_month(int month, int year) const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    return 29; 
                } else {
                    return 28; 
                }
            default:
                return 0;
        }
    }

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {
        if (day < 1 || month < 1 || month > 12 || day > days_in_month(month, year)) {
            cout << "invalid date provided. setting to default (1/1/0000)." << endl;
            day = 1;
            month = 1;
            year = 0;
        }
    }

    void set_date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
        if (day < 1 || month < 1 || month > 12 || day > days_in_month(month, year)) {
            cout << "Invalid date provided. Setting to default (1/1/0000)." << endl;
            day = 1;
            month = 1;
            year = 0;
        }
    }

    int get_day() const { return day; }
    int get_month() const { return month; }
    int get_year() const { return year; }

    void displayDate() const {
        string validity = (day >= 1 && month >= 1 && month <= 12 && day <= days_in_month(month, year)) ? "" : "Invalid ";
        cout << validity << "date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date1(29, 2, 2024); 
    Date date2(30, 2, 2023); 
    Date date3(15, 8, 2023); 

    date1.displayDate();
    date2.displayDate();
    date3.displayDate();

    date2.set_date(31, 12, 2024);
    date2.displayDate();

    return 0;
}
