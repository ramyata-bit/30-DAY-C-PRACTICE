/* Day 21 - Q82: Reverse a string */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200], temp;
    int i, len;

    printf("Enter string: ");
    scanf("%199s", str);

    len = (int)strlen(str);
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed = %s\n", str);
    return 0;
}
