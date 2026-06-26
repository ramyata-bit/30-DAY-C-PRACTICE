/* Day 2 - Q7: Find product of digits */
#include <stdio.h>

int main(void) {
    int n, prod = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    if (n == 0) {
        printf("Product = 0\n");
        return 0;
    }

    while (n > 0) {
        prod *= n % 10;
        n /= 10;
    }

    printf("Product = %d\n", prod);
    return 0;
}
