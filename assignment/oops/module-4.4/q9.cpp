#include <iostream>
using namespace std;

class Matrix {
private:
    int* data;
    int size;

public:
    Matrix(int a) : size(a) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = 0;
        }
    }

    Matrix( Matrix& other) : size(other.size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    ~Matrix() {
        delete[] data;
    }

    int& operator[](int index) {
        return data[index];
    }

    const int& operator[](int index) const {
        return data[index];
    }

    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            throw invalid_argument("matrix sizes do not match");
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result[i] = data[i] + other.data[i];
        }
        return result;
    }

    void print() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size = 3;
    Matrix num1(size);
    Matrix num2(size);

    for (int i = 0; i < size; ++i) {
        num1[i] = i + 1;
        num2[i] = (i + 1) * 2;
    }

    cout << "matrix 1: ";
    num1.print();

    cout << "matrix 2: ";
    num2.print();

    Matrix result = num1 + num2;

    cout << "result of addition: ";
    result.print();

    return 0;
}
