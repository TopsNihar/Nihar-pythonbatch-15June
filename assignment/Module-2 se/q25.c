#include <stdio.h>

int main() {
    int expenses[4];  
    int total_expense = 0.0;
    int average_expense;    
    int i;

    for (i = 0; i < 4; i++) {
        printf("enter expense %d: ", i + 1);
        scanf("%d", &expenses[i]); 
        total_expense += expenses[i]; 
    }

    average_expense = total_expense / 4;

    printf("\nexpenses:\n");
    for (i = 0; i < 4; i++) {
        printf("expense %d: %d\n", i + 1, expenses[i]);
    }

    printf("\ntotal expense: %d\n", total_expense);
    printf("average expense: %d\n", average_expense);

    return 0;
}

