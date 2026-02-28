#include <stdio.h>

int main() {
    int month, day;

    printf("Enter month (1-12) and day: ");
    scanf("%d %d", &month, &day);

    if((month==3 && day>=21) || month==4 || month==5 || (month==6 && day<=20))
        printf("Spring\n");
    else if((month==6 && day>=21) || month==7 || month==8 || (month==9 && day<=22))
        printf("Summer\n");
    else if((month==9 && day>=23) || month==10 || month==11 || (month==12 && day<=20))
        printf("Autumn\n");
    else
        printf("Winter\n");

    return 0;
}
