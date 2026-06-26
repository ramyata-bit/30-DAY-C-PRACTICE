/* Day 3 - Q10: Print prime numbers in a range */
#include <stdio.h>

int main(void) {
    int low, high, n, i, flag;

    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);

    if (low > high) {
        int t = low;
        low = high;
        high = t;
    }

    printf("Primes: ");
    for (n = low; n <= high; n++) {
        if (n <= 1)
            continue;
        flag = 1;
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", n);
    }
    printf("\n");

    return 0;
}
