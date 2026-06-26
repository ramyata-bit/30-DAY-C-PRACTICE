/* Day 25 - Q98: Find common characters in strings */
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100], b[100];
    int freq[256] = {0}, i, printed = 0;

    printf("Enter first string: ");
    scanf("%99s", a);
    printf("Enter second string: ");
    scanf("%99s", b);

    for (i = 0; a[i] != '\0'; i++)
        freq[(unsigned char)a[i]] = 1;

    printf("Common: ");
    for (i = 0; b[i] != '\0'; i++) {
        if (freq[(unsigned char)b[i]] == 1) {
            printf("%c ", b[i]);
            freq[(unsigned char)b[i]] = 2;
            printed = 1;
        }
    }

    if (!printed)
        printf("None");
    printf("\n");

    return 0;
}
