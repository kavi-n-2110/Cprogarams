#include <stdio.h>
int main() {
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);

    i = i * i;
    if(i == num)
        printf("Perfect square");
    else
        printf("Not a perfect square");

    return 0;
}
