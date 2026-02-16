#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 7 == 0)
        printf("Multiple of 7");
    else
        printf("Not a multiple of 7");

    return 0;
}
