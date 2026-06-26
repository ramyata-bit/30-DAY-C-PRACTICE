/* Day 29 - Q115: Create menu-driven string operations system */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];
    int choice, i, len;

    printf("Enter string: ");
    scanf("%199s", str);

    do {
        printf("\n1. Length\n2. Reverse\n3. Count vowels\n4. To uppercase\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Length = %d\n", (int)strlen(str));
        } else if (choice == 2) {
            len = (int)strlen(str);
            for (i = 0; i < len / 2; i++) {
                char t = str[i];
                str[i] = str[len - 1 - i];
                str[len - 1 - i] = t;
            }
            printf("%s\n", str);
        } else if (choice == 3) {
            int v = 0;
            for (i = 0; str[i]; i++) {
                char c = (char)tolower((unsigned char)str[i]);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    v++;
            }
            printf("Vowels = %d\n", v);
        } else if (choice == 4) {
            for (i = 0; str[i]; i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = (char)(str[i] - 32);
            }
            printf("%s\n", str);
        }
    } while (choice != 5);

    return 0;
}
