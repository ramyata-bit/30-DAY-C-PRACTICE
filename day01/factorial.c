/* Day 1 - Q3: Find factorial of a number */
#include <stdio.h>

int main(void) {
    int n, i;
    long long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %lld\n", fact);
    return 0;
}
