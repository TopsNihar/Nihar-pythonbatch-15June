#include <stdio.h>

int main() {
    int maths, physic, chemistry;
    int total_all_three, total_math_physic;

    printf("enter the marks in mathematics: ");
    scanf("%d", &maths);

    printf("enter the marks in physics: ");
    scanf("%d", &physic);

    printf("enter the marks in chemistry: ");
    scanf("%d", &chemistry);

    total_all_three = maths + physic + chemistry;

    total_math_physic = maths + physic;

    if ((maths >= 65 && physic >= 55 && chemistry >= 50 && total_all_three >= 190) ||
        (total_math_physic >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}

