 #include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("enter the first side: ");
    scanf("%f", &side1);

    printf("enter the second side: ");
    scanf("%f", &side2);

    printf("enter the third side: ");
    scanf("%f", &side3);

    if (side1 > 0 && side2 > 0 && side3 > 0 && (side1 + side2 + side3) == 180) {
        printf("The sides can form a triangle.\n");
    } 
    else {
        printf("The sides cannot form a triangle.\n");
    }
         return 0;
}
