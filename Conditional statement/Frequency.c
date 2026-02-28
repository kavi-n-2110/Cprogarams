#include <stdio.h>

int main() {
    int frequency;

    printf("Enter frequency in Hz: ");
    scanf("%d", &frequency);

    printf("Frequency: %.2f Hz\n", (float)frequency);

    if(frequency < 20)
        printf("Infrasound\n");
    else if(frequency <= 20000)
        printf("Audible Sound\n");
    else
        printf("Ultrasound\n");

    return 0;
}
