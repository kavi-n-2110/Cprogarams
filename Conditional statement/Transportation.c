#include <stdio.h>

int main() {
    float km, fare;

    printf("Enter kilometres travelled: ");
    scanf("%f", &km);

    if(km <= 10)
        fare = km * 17;
    else if(km <= 100)
        fare = km * 13;
    else
        fare = km * 5;

    printf("Total Fare: %.2f\n", fare);

    return 0;
}
