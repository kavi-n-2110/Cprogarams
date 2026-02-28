#include <stdio.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if(num > 10.5 && num < 20.3)
        printf("Valid Number\n");
    else
        printf("Invalid Number\n");

    return 0;
}
