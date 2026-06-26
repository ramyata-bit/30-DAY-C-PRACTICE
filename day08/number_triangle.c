/* Day 8 - Q30: Print number triangle */
#include <stdio.h>

int main(void) {
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
