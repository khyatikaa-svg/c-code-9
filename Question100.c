#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // reads a single word

    int len = strlen(str);

    printf("All substrings of the given string are:\n");

    // Outer loop for starting index
    for (int i = 0; i < len; i++) {
        // Inner loop for substring length
        for (int j = i; j < len; j++) {
            // Print substring from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
