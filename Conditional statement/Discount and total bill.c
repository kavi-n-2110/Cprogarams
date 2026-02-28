#include <stdio.h>

int main() {
    float purchase, discount = 0, total;
    char member;

    printf("Enter purchase amount: ");
    scanf("%f", &purchase);

    printf("Are you a member? (Y/N): ");
    scanf(" %c", &member);

    if(member == 'Y') {
        if(purchase >= 5000)
            discount = 20;
        else
            discount = 10;
    } else {
        if(purchase >= 5000)
            discount = 10;
        else
            discount = 5;
    }

    total = purchase - (purchase * discount / 100);

    printf("Discount: %.2f%%\n", discount);
    printf("Total Bill: %.2f\n", total);

    return 0;
}
