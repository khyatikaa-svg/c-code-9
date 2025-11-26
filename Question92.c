#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // to store frequency of each lowercase letter
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {  // check if it's a lowercase letter
            if (freq[str[i] - 'a'] == 1) {     // if already seen once
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
            freq[str[i] - 'a']++;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
