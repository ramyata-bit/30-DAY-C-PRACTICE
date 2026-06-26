/* Day 10 - Q39: Print number pyramid */
#include <stdio.h>

int main(void) {
    int rows, i, j, space;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
