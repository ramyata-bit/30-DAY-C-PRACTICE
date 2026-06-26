/* Day 11 - Q44: Write function to find factorial */
#include <stdio.h>

long long factorial(int n) {
    int i;
    long long f = 1;

    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid\n");
        return 1;
    }

    printf("Factorial = %lld\n", factorial(n));
    return 0;
}
