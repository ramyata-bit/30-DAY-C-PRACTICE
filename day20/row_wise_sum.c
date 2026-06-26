/* Day 20 - Q79: Find row-wise sum */
#include <stdio.h>

int main(void) {
    int r, c, i, j, a[10][10], row_sum;

    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        row_sum = 0;
        for (j = 0; j < c; j++)
            row_sum += a[i][j];
        printf("Row %d sum = %d\n", i + 1, row_sum);
    }

    return 0;
}
