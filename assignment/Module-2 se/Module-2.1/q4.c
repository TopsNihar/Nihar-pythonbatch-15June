 #include <stdio.h>

int main() {
    int num1, num2;
    char sign;
    float result;

    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &sign); 
    
    printf("enter second number: ");
    scanf("%d", &num2);

    if (sign == '+') {
        result = num1 + num2;
        printf("%d + %d = %.2f\n", num1, num2, result);
    } else if (sign == '-') {
        result = num1 - num2;
        printf("%d - %d = %.2f\n", num1, num2, result);
    } else if (sign == '*') {
        result = num1 * num2;
        printf("%d * %d = %.2f\n", num1, num2, result);
    } else if (sign == '/') {
        
        if (num2 != 0) {
            result = (float)num1 / num2;
            printf("%d / %d = %.2f\n", num1, num2, result);
        } else {
            printf("division by zero is not allowed.\n");
        }
    } else if (sign == '%') {
        
        if (num2 != 0) {
            result = num1 % num2;
            printf("%d %% %d = %.2f\n", num1, num2, result);
        } else {
            printf(" modulo by zero is not allowed.\n");
        }
    } else {
        printf("invalid operator.\n");
    }

    return 0;
}
