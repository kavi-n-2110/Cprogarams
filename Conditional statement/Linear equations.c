#include <stdio.h>

int main() {
    float a, b, x;

    printf("Enter coefficients a and b: ");
    scanf("%f %f", &a, &b);

    if(a == 0 && b == 0)
        printf("Infinite Solutions\n");
    else if(a == 0 && b != 0)
        printf("No Solution\n");
    else {
        x = -b / a;
        printf("Solution: %.2f\n", x);
    }

    return 0;
}
