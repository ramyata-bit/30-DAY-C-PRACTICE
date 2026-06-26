/* Day 24 - Q96: Remove duplicate characters */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200], res[200];
    int seen[256] = {0}, i, j = 0;

    printf("Enter string: ");
    scanf("%199s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            res[j++] = str[i];
        }
    }
    res[j] = '\0';

    printf("%s\n", res);
    return 0;
}
