#include <stdio.h>

int main() {
    char class;

    printf("Choose class (W-Warrior, M-Mage, R-Rogue): ");
    scanf(" %c", &class);

    if(class=='W')
        printf("Warrior receives extra strength\n");
    else if(class=='M')
        printf("Mage gains extra magic power\n");
    else if(class=='R')
        printf("Rogue gets extra agility\n");
    else
        printf("Invalid Class\n");

    return 0;
}
