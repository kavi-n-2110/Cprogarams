#include <stdio.h>

int main() {
    float temp, oilPressure, rpm;

    printf("Enter Temperature (°C): ");
    scanf("%f", &temp);

    printf("Enter Oil Pressure (psi): ");
    scanf("%f", &oilPressure);

    printf("Enter RPM: ");
    scanf("%f", &rpm);

    if(temp >= 70 && temp <= 100 &&
       oilPressure >= 20 && oilPressure <= 80 &&
       rpm >= 700 && rpm <= 6000)
        printf("Engine Status: Healthy\n");
    else
        printf("Engine Status: Check Required\n");

    return 0;
}
