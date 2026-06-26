/* Day 4 - Q13: Generate Fibonacci series */
#include <stdio.h>

int main(void) {
    int n, i, a = 0, b = 1, c;

    printf("Enter terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
