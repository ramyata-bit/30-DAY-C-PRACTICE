/* Day 20 - Q80: Find column-wise sum */
#include <stdio.h>

int main(void) {
    int r, c, i, j, a[10][10], col_sum;

    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (j = 0; j < c; j++) {
        col_sum = 0;
        for (i = 0; i < r; i++)
            col_sum += a[i][j];
        printf("Col %d sum = %d\n", j + 1, col_sum);
    }

    return 0;
}
