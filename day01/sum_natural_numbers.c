/* Day 1 - Q1: Calculate sum of first N natural numbers */
#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);
    return 0;
}
