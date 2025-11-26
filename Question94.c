#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // read full line including spaces

    while (1) {
        // if character is alphabetic, build word
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; // end the current word
            len = strlen(word);

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word); // copy current word as longest
            }

            j = 0; // reset for next word
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
