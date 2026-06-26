/* Day 21 - Q81: Find string length without strlen() */
#include <stdio.h>

int my_strlen(char s[]) {
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

int main(void) {
    char str[200];

    printf("Enter string: ");
    scanf("%199s", str);

    printf("Length = %d\n", my_strlen(str));
    return 0;
}
