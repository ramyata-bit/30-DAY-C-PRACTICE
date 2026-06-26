/* Day 5 - Q19: Print factors of a number */
#include <stdio.h>

int main(void) {
    int n, i;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("No factors\n");
        return 0;
    }

    if (n < 0)
        n = -n;

    printf("Factors: ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
