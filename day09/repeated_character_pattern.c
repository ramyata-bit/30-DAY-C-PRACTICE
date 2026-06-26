/* Day 9 - Q35: Print repeated character pattern */
#include <stdio.h>

int main(void) {
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++)
            printf("%c", 'A' + i - 1);
        printf("\n");
    }

    return 0;
}
