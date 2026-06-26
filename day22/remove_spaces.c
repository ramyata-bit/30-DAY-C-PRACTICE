/* Day 22 - Q88: Remove spaces from string */
#include <stdio.h>

int main(void) {
    char str[300], res[300];
    int i, j = 0;

    printf("Enter string: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            res[j++] = str[i];
    }
    res[j] = '\0';

    printf("%s\n", res);
    return 0;
}
