/* Day 6 - Q24: Find x^n without pow() */
#include <stdio.h>

int main(void) {
    int x, n, i;
    long long result = 1;

    printf("Enter base and power: ");
    scanf("%d %d", &x, &n);

    if (n < 0) {
        printf("Negative power not handled\n");
        return 1;
    }

    for (i = 0; i < n; i++)
        result *= x;

    printf("%d^%d = %lld\n", x, n, result);
    return 0;
}
