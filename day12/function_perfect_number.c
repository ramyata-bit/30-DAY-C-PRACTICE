/* Day 12 - Q48: Write function for perfect number */
#include <stdio.h>

int is_perfect(int n) {
    int i, sum = 0;

    if (n <= 0)
        return 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (is_perfect(n))
        printf("Perfect\n");
    else
        printf("Not perfect\n");

    return 0;
}
