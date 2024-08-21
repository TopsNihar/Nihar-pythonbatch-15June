#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;

public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    String operator+(const String& other) const {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        String result(temp);
        delete[] temp;
        return result;
    }

    void show() const {
        cout << str;
    }
};

int main() {
    String str1("hello, ");
    String str2("world!");

    String result = str1 + str2;

    cout << "concatenated string: ";
    result.show();
    cout << endl;

    return 0;
}
