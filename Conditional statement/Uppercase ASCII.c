#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 65 && ch <= 90)
        printf("Uppercase Letter\n");
    else
        printf("Not Uppercase\n");

    return 0;
}
