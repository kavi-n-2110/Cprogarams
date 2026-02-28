#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 8 == 0 && num % 1 == 0)
        printf("Hey\n");
    else if(num % 1 == 0)
        printf("Hi\n");
    else if(num % 8 == 0)
        printf("Wow\n");
    else
        printf("%d\n", num);

    return 0;
}
