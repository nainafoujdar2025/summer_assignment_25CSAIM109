#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int maxCount = 0;
    char maxChar = ' ';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequencies
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the character with the maximum frequency
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        unsigned char ch = str[i];
        if (freq[ch] > maxCount) {
            maxCount = freq[ch];
            maxChar = ch;
        }
    }

    if (maxCount > 0) {
        printf("Maximum occurring character is '%c' (appears %d times).\n", maxChar, maxCount);
    } else {
        printf("String is empty.\n");
    }

    return 0;
}