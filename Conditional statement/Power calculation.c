#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);

    result = pow(base, exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}
