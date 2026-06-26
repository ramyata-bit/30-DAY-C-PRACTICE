/* Day 6 - Q23: Count set bits in a number */
#include <stdio.h>

int main(void) {
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n) {
        count += n & 1;
        n >>= 1;
    }

    printf("Set bits = %d\n", count);
    return 0;
}
