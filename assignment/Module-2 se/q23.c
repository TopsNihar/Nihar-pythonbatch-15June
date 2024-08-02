 #include <stdio.h>

int main() {
    int a, b;

    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);

    if (a != 0 && b != 0) { 
        a = a * b; 
        b = a / b; 
        a = a / b; 
    } else {
        printf("never swap when one number is zero.\n");
        return 1;
    }

    printf("after swapping:\n");
    printf("first number: %d\n", a);
    printf("second number: %d\n", b);

    return 0;
}
