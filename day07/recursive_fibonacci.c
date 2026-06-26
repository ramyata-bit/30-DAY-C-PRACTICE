/* Day 7 - Q26: Recursive Fibonacci */
#include <stdio.h>

int fib(int n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    int n;

    printf("Enter term position: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid\n");
        return 1;
    }

    printf("Fibonacci term = %d\n", fib(n));
    return 0;
}
