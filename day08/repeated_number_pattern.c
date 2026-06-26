/* Day 8 - Q32: Print repeated-number pattern */
#include <stdio.h>

int main(void) {
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }

    return 0;
}
