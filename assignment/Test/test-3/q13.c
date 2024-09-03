// Online C compiler to run C program online
#include<stdio.h>

float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float divi(float a,float b);

int main() {
    float num1, num2, result;
    char operator;

    printf("enter first number: ");
    scanf("%f", &num1);
    printf("enter an operator (+,-,*,/): ");
    scanf(" %c", &operator);
    printf("enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("result: %.2f\n", result);
            break;
        case '-':
            result = sub(num1, num2);
            printf("result: %.2f\n", result);
            break;
        case '*':
            result = mul(num1, num2);
            printf("result: %.2f\n", result);
            break;
          case '/':
            result = divi(num1, num2);
            printf("result: %.2f\n", result);
            break;
       
        default:
            printf("error:.\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float mul(float a, float b) {
    return a * b;
}
float divi(float a, float b) {
    return a / b;
}


