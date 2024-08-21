 #include <stdio.h>

int main() {
    int customer_id;
    char name[100];
    float units_consumed, total_amount;

    printf("enter customer id: ");
    scanf("%d", &customer_id);

    printf("enter customer name: ");
    scanf(" %s", name);  
    
    printf("enter units consumed: ");
    scanf("%f", &units_consumed);

    if (units_consumed <= 350) {
        total_amount = units_consumed * 1.20;
    } else if (units_consumed > 350 && units_consumed < 600) {
        total_amount = units_consumed * 1.50;
    } else if (units_consumed >= 600 && units_consumed < 800) {
        total_amount = units_consumed * 1.80;
    } else {
        total_amount = units_consumed * 2.00;
    }

    printf("\nelectricity bill\n");
    printf("customer id: %d\n", customer_id);
    printf("customer name: %s\n", name);
    printf("units consumed: %.2f\n", units_consumed);
    printf("total amount to be paid: %.2f\n", total_amount);

    return 0;
}



