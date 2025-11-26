#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first initial (first character)
    if (name[0] != ' ')
        printf("%c", toupper(name[0]));

    // Loop through the string and print initials after spaces
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf(".%c", toupper(name[i+1]));
        }
    }

    printf(".\n");
    return 0;
}
