/* Day 5 - Q20: Find largest prime factor */
#include <stdio.h>

int main(void) {
    int n, i, largest = -1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("No prime factor\n");
        return 0;
    }

    if (n < 0)
        n = -n;

    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    if (n > 2)
        largest = n;

    printf("Largest prime factor = %d\n", largest);
    return 0;
}
