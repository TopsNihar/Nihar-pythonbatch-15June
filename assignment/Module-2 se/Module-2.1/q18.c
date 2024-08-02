#include <stdio.h>

int main() {
    float costprice, sellingprice, profitorloss;

    printf("enter the cost price: ");
    scanf("%f", &costprice);

    printf("enter the selling price: ");
    scanf("%f", &sellingprice);

    if (sellingprice > costprice) {
        profitorloss = sellingprice - costprice;
        printf("profit: %.2f\n", profitorloss);
    } 
    else if (sellingprice < costprice) {
        profitorloss = costprice - sellingprice;
        printf("loss: %.2f\n", profitorloss);
    } 
    else {
        printf("no profit or loss. The selling price is equal to the cost price.\n");
    }

    return 0;
}
