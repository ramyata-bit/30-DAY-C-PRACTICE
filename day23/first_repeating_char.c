/* Day 23 - Q90: Find first repeating character */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int seen[256] = {0}, i, len;

    printf("Enter string: ");
    scanf("%199s", str);

    len = (int)strlen(str);
    for (i = 0; i < len; i++) {
        if (seen[(unsigned char)str[i]]) {
            printf("Character = %c\n", str[i]);
            return 0;
        }
        seen[(unsigned char)str[i]] = 1;
    }

    printf("No repeating character\n");
    return 0;
}
