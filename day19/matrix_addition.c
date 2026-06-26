/* Day 19 - Q73: Add matrices */
#include <stdio.h>

int main(void) {
    int r, c, i, j, a[10][10], b[10][10], sum[10][10];

    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
