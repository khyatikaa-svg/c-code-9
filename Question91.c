#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Copy only non-vowel characters
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
            ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = ch;
        }
    }

    result[j] = '\0';  // Null terminate the result string

    // Output result
    printf("String after removing vowels: %s", result);

    return 0;
}
