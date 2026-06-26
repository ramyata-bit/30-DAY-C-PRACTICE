/* Day 12 - Q47: Write function for Fibonacci */
#include <stdio.h>

int fib(int n) {
    int i, a = 0, b = 1, c;

    if (n <= 0)
        return -1;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(void) {
    int n;

    printf("Enter term: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Invalid\n");
    else
        printf("Term = %d\n", fib(n));

    return 0;
}
