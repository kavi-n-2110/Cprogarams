#include <stdio.h>

int main() {
    int days;
    float rate, total;

    printf("Enter number of rental days: ");
    scanf("%d", &days);

    if(days <= 5)
        rate = 2;
    else if(days <= 10)
        rate = 3;
    else if(days <= 15)
        rate = 4;
    else
        rate = 5;

    total = rate * days;

    printf("Total Rental Cost: %.2f\n", total);

    return 0;
}
