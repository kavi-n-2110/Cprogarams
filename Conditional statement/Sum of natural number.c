#include <stdio.h>

int sum_of_natural_numbers(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if(n <= 0)
        printf("enter a positive integer\n");
    else
        printf("Sum: %d\n", sum_of_natural_numbers(n));

    return 0;
}
