/* Day 22 - Q87: Character frequency */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int i, freq[256] = {0};

    printf("Enter string: ");
    scanf("%199s", str);

    for (i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && !isspace(i))
            printf("%c -> %d\n", i, freq[i]);
    }

    return 0;
}
