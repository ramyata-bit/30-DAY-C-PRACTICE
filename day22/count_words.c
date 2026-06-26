/* Day 22 - Q86: Count words in a sentence */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char line[300];
    int i, words = 0, in_word = 0;

    printf("Enter sentence: ");
    getchar();
    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; i++) {
        if (!isspace((unsigned char)line[i])) {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }

    printf("Words = %d\n", words);
    return 0;
}
