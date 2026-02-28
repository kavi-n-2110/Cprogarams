#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0 && num % 6 == 0)
        printf("Divisible by both 2 and 6\n");
    else
        printf("Not divisible by both 2 and 6\n");

    return 0;
}
