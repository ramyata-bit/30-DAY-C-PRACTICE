/* Day 2 - Q6: Reverse a number */
#include <stdio.h>

int main(void) {
    int n, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reversed = %d\n", rev);
    return 0;
}
