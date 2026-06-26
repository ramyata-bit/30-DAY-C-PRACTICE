/* Day 25 - Q100: Sort words by length */
#include <stdio.h>
#include <string.h>

int word_len(char s[]) {
    return (int)strlen(s);
}

int main(void) {
    int n, i, j;
    char words[20][50], temp[50];

    printf("Enter number of words: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Word %d: ", i + 1);
        scanf("%49s", words[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (word_len(words[i]) > word_len(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Sorted by length:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}
