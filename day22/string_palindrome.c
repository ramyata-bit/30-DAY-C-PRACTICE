/* Day 22 - Q85: Check palindrome string */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int i, len, flag = 1;

    printf("Enter string: ");
    scanf("%199s", str);

    len = (int)strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
