#include <stdio.h>

int main() {
    char s[1001];
    int freq[10] = {0};

    // Read input string
    scanf("%s", s);

    // Traverse the string
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            freq[s[i] - '0']++;
        }
    }

    // Print frequencies of digits 0 to 9
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}
