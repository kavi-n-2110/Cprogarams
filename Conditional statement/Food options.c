#include <stdio.h>

int main()
{
    int age;
    int result;


    printf("Enter your age: ");
    result = scanf("%d", &age);

  
    if (result != 1)
    {
        printf("Invalid input! Please enter a numeric age.\n");
        return 0;
    }

    
    if (age < 0)
    {
        printf("Invalid age! Age cannot be negative.\n");
    }
    else if (age <= 5)
    {
        printf("Age Group: Young Children\n");
        printf("Recommended Food: Mashed vegetables or soft fruits.\n");
    }
    else if (age <= 12)
    {
        printf("Age Group: Children\n");
        printf("Recommended Food: Milk, rice, eggs, and fruits.\n");
    }
    else if (age <= 18)
    {
        printf("Age Group: Teenager\n");
        printf("Recommended Food: Burgers or pasta.\n");
    }
    else if (age <= 50)
    {
        printf("Age Group: Adult\n");
        printf("Recommended Food: Balanced diet with rice, vegetables, and protein.\n");
    }
    else
    {
        printf("Age Group: Senior Adult\n");
        printf("Recommended Food: Soup or grilled fish.\n");
    }

    return 0;
}
