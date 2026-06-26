/* Day 5 - Q17: Check perfect number */
#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not perfect\n");
        return 0;
    }

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect\n");
    else
        printf("Not perfect\n");

    return 0;
}
