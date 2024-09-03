// Write a C program to find the second largest element in an array of integers.
#include <stdio.h>

int sec_large(int arr[], int size) {
    if (size < 2) {
       
        return 1;
    }

    int large = arr[0];
    int sec_large ; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > large) {
            sec_large = large;
            large = arr[i];
        } else if (arr[i] > sec_large && arr[i] < large) {
            sec_large = arr[i];
        }
    }
   
    return sec_large;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sec_large(arr, size);

    if (result == 1) {
        printf("only one element.\n");
    } else {
        printf("second large: %d\n", result);
    }

    return 0;
}
