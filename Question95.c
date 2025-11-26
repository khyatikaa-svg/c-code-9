#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    // Check if lengths are equal
    if (strlen(s1) != strlen(s2))
        return 0;

    // Create a temporary string and concatenate s1 with itself
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    if (strstr(temp, s2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Strings are rotations of each other.\n");
    else
        printf("Strings are NOT rotations of each other.\n");

    return 0;
}
