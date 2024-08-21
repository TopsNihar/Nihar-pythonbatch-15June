#include <iostream>
using namespace std;

template <typename t>
void swap(t& a, t& b) {
    t temp = a;
    a = b;
    b = temp;
}

template <typename t>
void sortArray(t arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename t>
void printArray(const t arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {64, 25, 12, 22, 11};
    double doubleArray[] = {64.5, 25.1, 12.7, 22.8, 11.3};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "original integer array: ";
    printArray(intArray, intSize);

    cout << "original double array: ";
    printArray(doubleArray, doubleSize);

    sortArray(intArray, intSize);
    sortArray(doubleArray, doubleSize);

    cout << "sorted integer array: ";
    printArray(intArray, intSize);

    cout << "sorted double array: ";
    printArray(doubleArray, doubleSize);

    return 0;
}
