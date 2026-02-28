#include <stdio.h>

int main() {
    float income, allowance, saving, percent;

    printf("Enter total income: ");
    scanf("%f", &income);

    printf("Enter other allowances: ");
    scanf("%f", &allowance);

    saving = income - allowance;
    percent = (saving / income) * 100;

    printf("Saving Amount: %.2f\n", saving);
    printf("Saving Percentage: %.2f%%\n", percent);

    return 0;
}
