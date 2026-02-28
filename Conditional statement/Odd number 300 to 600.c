#include <stdio.h>

int main() {
    int num;
    printf("Enter number (300-600): ");
    scanf("%d", &num);

    if(num >= 300 && num <= 600 && num % 2 != 0)
        printf("Valid Odd Number\n");
    else
        printf("Condition Not Satisfied\n");

    return 0;
}
