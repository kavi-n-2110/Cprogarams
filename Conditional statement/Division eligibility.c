#include <stdio.h>

int main() {
    int age, experience;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter years of coding experience: ");
    scanf("%d", &experience);

    if(age >= 13 && age <= 18) {
        if(experience >= 1 && experience <= 3)
            printf("Eligible for Junior Division\n");
        else if(experience > 3)
            printf("Eligible for Intermediate Division\n");
        else
            printf("Not Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
