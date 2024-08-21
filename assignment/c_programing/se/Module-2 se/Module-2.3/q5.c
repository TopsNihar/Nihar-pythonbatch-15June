#include <stdio.h>

void takearrayInput(int arr[], int n) {
    printf("enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void sortarray(int arr[], int n, char order) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((order == 'a' || order == 'A') && arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } else if ((order == 'd' || order == 'D') && arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int array1[n], array2[n];

    printf("enter elements for the first array:\n");
    takearrayInput(array1, n);

    printf("enter elements for the second array:\n");
    takearrayInput(array2, n);

    char order;
    printf("enter A for ascending order, D for descending order: ");
    scanf(" %c", &order);

    sortarray(array1, n, order);
    sortarray(array2, n, order);

    printf("\nsorted array 1: ");
    printarray(array1, n);
    printf("sorted array 2: ");
    printarray(array2, n);

    return 0;
}


