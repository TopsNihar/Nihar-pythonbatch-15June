 #include <stdio.h>

int main() {
    int monthnumber;

    
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthnumber);

    switch (monthnumber) {
        case 1: 
        printf("January:31\n");
break;
        case 3: 
        printf("March:31\n");
break;
        case 5:  
         printf("May:31\n");
break;
        case 7:  
         printf("july:31\n");
break;
        case 8:  
         printf("august:31\n");
break;
        case 10:
         printf("octomber:31\n");
break;
        case 12: 
         printf("december:31\n");
            break;
        case 4:  
         printf("april:30\n");
break;
        case 6:  
         printf("june:30\n");
break;
        case 9:  
         printf("september:30\n");
break;
        case 11: 
         printf("november:30\n");
break;
            break;
        case 2:  
         printf("feb:28\n");
            break;
        default:
            printf("wrong.  enter a number between 1 to 12.\n");
            return 1;
    }

   
    return 0;
}

