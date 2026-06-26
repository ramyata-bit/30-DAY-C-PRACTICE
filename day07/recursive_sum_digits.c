/* Day 7 - Q27: Recursive sum of digits */
#include <stdio.h>

int sum_digits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum_digits(n / 10);
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    printf("Sum = %d\n", sum_digits(n));
    return 0;
}
