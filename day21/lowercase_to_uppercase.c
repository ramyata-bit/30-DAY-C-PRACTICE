/* Day 21 - Q84: Convert lowercase to uppercase */
#include <stdio.h>

int main(void) {
    char str[200];
    int i;

    printf("Enter string: ");
    scanf("%199s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (char)(str[i] - 32);
    }

    printf("%s\n", str);
    return 0;
}
