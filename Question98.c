#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';  // remove newline

    int lastSpace = -1;
    // Find position of the last space (to get surname)
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // If only one word, print it directly
    if (lastSpace == -1) {
        printf("%s\n", name);
        return 0;
    }

    // Print initials for names before the last one
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && i != lastSpace && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
    }

    // Print surname in full
    printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}
