 #include <stdio.h>

int main() {
    int side, circumference;

    printf("enter the length of the square: ");
    scanf("%d", &side);

    circumference = 4 * side;

    printf("circumference of the square: %d\n", circumference);

    return 0;
}
