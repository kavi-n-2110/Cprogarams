#include <stdio.h>

int main()
{
    int age;
    int result;

    // Prompt user for age
    printf("Enter your age: ");
    result = scanf("%d", &age);

    // Check for non-numeric input
    if (result != 1)
    {
        printf("Error: Invalid input. Please enter a numeric value.\n");
        return 0;
    }

    // Check for negative age
    if (age < 0)
    {
        printf("Error: Age cannot be negative.\n");
    }
    else
    {
        // Categorize age and suggest food
        if (age <= 5)
        {
            printf("Age Group: Child\n");
            printf("Recommended Food: Mashed vegetables or soft fruits.\n");
        }
        else if (age >= 6 && age <= 12)
        {
            printf("Age Group: Kid\n");
            printf("Recommended Food: Rice, milk, eggs, and fruits.\n");
        }
        else if (age >= 13 && age <= 18)
        {
            printf("Age Group: Teenager\n");
            printf("Recommended Food: Burgers or pasta.\n");
        }
        else if (age >= 19 && age <= 50)
        {
            printf("Age Group: Adult\n");
            printf("Recommended Food: Balanced diet with vegetables, rice, and protein.\n");
        }
        else // age >= 51
        {
            printf("Age Group: Senior Adult\n");
            printf("Recommended Food: Soup or grilled fish.\n");
        }
    }

    return 0;
}
