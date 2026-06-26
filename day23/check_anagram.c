/* Day 23 - Q91: Check anagram strings */
#include <stdio.h>
#include <string.h>

int main(void) {
    char a[100], b[100];
    int freq[256] = {0}, i;

    printf("Enter first string: ");
    scanf("%99s", a);
    printf("Enter second string: ");
    scanf("%99s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagram\n");
        return 0;
    }

    for (i = 0; a[i] != '\0'; i++) {
        freq[(unsigned char)a[i]]++;
        freq[(unsigned char)b[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
