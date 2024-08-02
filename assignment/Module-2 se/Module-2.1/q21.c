#include <stdio.h>

int main() {
    int monthnumber;
    int day;

    printf("enter the month number (1-12): ");
    scanf("%d", &monthnumber);

    switch (monthnumber) {
        case 1:  
         printf("January\n");
         break;
        case 3:  
         printf("March\n");
         break;
        case 5:  
         printf("May\n");
         break;
        case 7:  
         printf("July\n");
         break;
        case 8: 
         printf("August\n");
         break;
        case 10: 
         printf("Octomber\n");
         break;
        case 12: 
         printf("Desember\n");
            day = 31;
            break;
        case 4: 
         printf("April\n");
         break;
        case 6:  
         printf("June\n");
         break;
        case 9:  
         printf("September\n");
         break;
        case 11: 
         printf("November\n");
            day = 30;
            break;
        case 2:  
         printf("February\n");
            day = 28; 
            break;
        default:
            printf("wrong month number. enter a number 1 to 12.\n");
            return 1; 
    }

    printf("number of day in month %d: %d\n", monthnumber, day);

    return 0;
}
