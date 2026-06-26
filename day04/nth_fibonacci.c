/* Day 4 - Q14: Find nth Fibonacci term */
#include <stdio.h>

int main(void) {
    int n, i, a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid\n");
        return 1;
    }

    if (n == 1) {
        printf("Term = 0\n");
        return 0;
    }
    if (n == 2) {
        printf("Term = 1\n");
        return 0;
    }

    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("Term = %d\n", b);
    return 0;
}
