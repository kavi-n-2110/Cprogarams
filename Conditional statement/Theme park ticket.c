#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age <= 12 && age >= 0)
        printf("Child Ticket (Discount Applied)\n");
    else if(age > 12)
        printf("Regular Ticket\n");
    else
        printf("Invalid Age\n");

    return 0;
}
