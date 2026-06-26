/* Day 11 - Q43: Write function to check prime */
#include <stdio.h>

int is_prime(int n) {
    int i;

    if (n <= 1)
        return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
