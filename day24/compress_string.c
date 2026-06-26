/* Day 24 - Q94: Compress a string */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int i, len, count;

    printf("Enter string: ");
    scanf("%199s", str);

    len = (int)strlen(str);
    for (i = 0; i < len; ) {
        char c = str[i];
        count = 0;
        while (i < len && str[i] == c) {
            count++;
            i++;
        }
        printf("%c%d", c, count);
    }
    printf("\n");

    return 0;
}
