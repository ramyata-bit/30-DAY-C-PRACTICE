/* Day 19 - Q75: Transpose matrix */
#include <stdio.h>

int main(void) {
    int r, c, i, j, a[10][10], t[10][10];

    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            t[j][i] = a[i][j];

    printf("Transpose:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    return 0;
}
