/* Day 7 - Q25: Recursive factorial */
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid\n");
        return 1;
    }

    printf("Factorial = %d\n", factorial(n));
    return 0;
}
