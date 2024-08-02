#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    
    printf("Enter the length of side c: ");
    scanf("%f", &c);
    
    float circumference = a + b + c;
    
    printf("The circumference of the triangle is: %.2f\n", circumference);
    
    return 0;
}
