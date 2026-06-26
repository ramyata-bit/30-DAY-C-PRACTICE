/* Day 19 - Q76: Find diagonal sum */
#include <stdio.h>

int main(void) {
    int n, i, sum = 0, a[10][10];

    printf("Enter matrix size (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for (i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("Diagonal sum = %d\n", sum);

    return 0;
}
