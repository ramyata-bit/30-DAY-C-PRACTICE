/* Day 6 - Q21: Convert decimal to binary */
#include <stdio.h>

int main(void) {
    int n, arr[32], i = 0, j;

    printf("Enter decimal: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    if (n < 0) {
        printf("Enter positive number\n");
        return 1;
    }

    while (n > 0) {
        arr[i++] = n % 2;
        n /= 2;
    }

    printf("Binary = ");
    for (j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);
    printf("\n");

    return 0;
}
