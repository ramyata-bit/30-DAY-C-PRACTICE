/* Day 23 - Q89: Find first non-repeating character */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int freq[256] = {0}, i, len;

    printf("Enter string: ");
    scanf("%199s", str);

    len = (int)strlen(str);
    for (i = 0; i < len; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; i < len; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("Character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character\n");
    return 0;
}
