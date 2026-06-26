/* Day 1 - Q4: Count digits in a number */
#include <stdio.h>

int main(void) {
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Digits = 1\n");
        return 0;
    }

    if (n < 0)
        n = -n;

    while (n != 0) {
        n /= 10;
        count++;
    }

    printf("Digits = %d\n", count);
    return 0;
}
