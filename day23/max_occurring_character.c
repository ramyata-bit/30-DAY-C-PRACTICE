/* Day 23 - Q92: Find maximum occurring character */
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int freq[256] = {0}, i, len, max = 0;
    char ch = '\0';

    printf("Enter string: ");
    scanf("%199s", str);

    len = (int)strlen(str);
    for (i = 0; i < len; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            ch = (char)i;
        }
    }

    printf("Character = %c, Count = %d\n", ch, max);
    return 0;
}
