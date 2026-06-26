/* Day 1 - Q2: Print multiplication table of a given number */
#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
