#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num >= 100 && num <= 999)
        printf("3-digit number");
    else
        printf("Not a 3-digit number");

    return 0;
}
