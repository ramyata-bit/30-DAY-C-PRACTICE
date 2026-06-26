/* Day 8 - Q31: Print character triangle */
#include <stdio.h>

int main(void) {
    int rows, i, j;

    printf("Enter rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++)
            printf("%c", 'A' + j);
        printf("\n");
    }

    return 0;
}
