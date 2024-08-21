3]
 #include <stdio.h>

#define PI 3.14

int main() {
    int r, area, circumference;
    printf("Enter the r of the circle: ");
    scanf("%d", &r);
    
    if (r < 0) {
        printf("r cannot be negative.\n");
        return 1;
    }

    area = PI * r * r;
    
    circumference = 2 * PI * r;
    
    printf("area circle: %d\n", area);
    printf("circumference of the circle: %d\n", circumference);
    
    return 0;
}

