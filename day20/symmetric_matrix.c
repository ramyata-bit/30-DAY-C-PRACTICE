/* Day 20 - Q78: Check symmetric matrix */
#include <stdio.h>

int main(void) {
    int n, i, j, sym = 1, a[10][10];

    printf("Enter size (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n && sym; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                sym = 0;
                break;
            }
        }
    }

    if (sym)
        printf("Symmetric\n");
    else
        printf("Not symmetric\n");

    return 0;
}
