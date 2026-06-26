/* Day 9 - Q34: Print reverse number triangle */
#include <stdio.h>

int main(void) {
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
