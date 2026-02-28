#include <stdio.h>

int main() {
    float attended, total, percent;

    printf("Enter hours attended and total hours: ");
    scanf("%f %f", &attended, &total);

    percent = (attended / total) * 100;

    printf("Attendance: %.2f%%\n", percent);

    if(percent >= 75)
        printf("Allowed to sit for exam\n");
    else if(percent >= 66)
        printf("Apply for Condonation\n");
    else
        printf("Not Allowed\n");

    return 0;
}
