#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Increment frequencies for the first string
    for (int i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    // Decrement frequencies for the second string
    for (int i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    // If any element in freq array is not zero, they are not anagrams
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}