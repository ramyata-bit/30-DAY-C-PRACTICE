/* Day 20 - Q77: Multiply matrices */
#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], prod[10][10] = {{0}};

    printf("Rows and cols of A: ");
    scanf("%d %d", &r1, &c1);
    printf("Rows and cols of B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Cannot multiply\n");
        return 1;
    }

    printf("Matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++)
                prod[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("Product:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }

    return 0;
}
