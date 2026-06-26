/* Day 24 - Q95: Find longest word */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char line[300], word[100], longest[100] = "";
    int i = 0, j = 0, max_len = 0;

    printf("Enter sentence: ");
    getchar();
    fgets(line, sizeof(line), stdin);

    while (line[i] != '\0') {
        if (!isspace((unsigned char)line[i])) {
            word[j++] = line[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (j > max_len) {
                    max_len = j;
                    strcpy(longest, word);
                }
                j = 0;
            }
        }
        i++;
    }

    if (j > 0) {
        word[j] = '\0';
        if (j > max_len)
            strcpy(longest, word);
    }

    printf("Longest word = %s\n", longest);
    return 0;
}
