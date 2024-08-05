#include <stdio.h>
int main() {
    char names[5][50]; 
    int i;

    printf("enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        printf("enter name %d: ", i + 1);
        scanf("%s", names[i]); 
    }

    printf("\nnames enter:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

}
