/* Day 10 - Q37: Print star pyramid */
#include <stdio.h>

int main(void) {
    int rows, i, j, space;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
