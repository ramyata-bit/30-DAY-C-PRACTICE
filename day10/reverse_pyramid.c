/* Day 10 - Q38: Print reverse pyramid */
#include <stdio.h>

int main(void) {
    int rows, i, j, space;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
