#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0;
    char *word_start = NULL;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin); // read entire line

    while (1) {
        // If character is not space/newline and word_start is NULL, mark start
        if ((str[i] != ' ' && str[i] != '\0' && str[i] != '\n') && word_start == NULL) {
            word_start = &str[i];
        }

        // If space or end of string reached — reverse current word
        if ((str[i] == ' ' || str[i] == '\0' || str[i] == '\n') && word_start != NULL) {
            reverseWord(word_start, &str[i - 1]);
            word_start = NULL;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Reversed sentence: %s\n", str);

    return 0;
}
