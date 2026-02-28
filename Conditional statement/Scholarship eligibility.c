#include <stdio.h>

int main() {
    float gpa;
    int extra, tech;

    printf("Enter GPA: ");
    scanf("%f", &gpa);

    printf("Enter number of extracurricular activities: ");
    scanf("%d", &extra);

    printf("Enter number of technical activities: ");
    scanf("%d", &tech);

    if(gpa >= 3.5 && extra >= 3 && tech >= 2)
        printf("Eligible for Scholarship\n");
    else
        printf("Not Eligible\n");

    return 0;
}
