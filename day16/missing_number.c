/* Day 16 - Q61: Find missing number in array */
#include <stdio.h>

int main(void) {
    int n, i, arr[100], sum = 0, total;

    printf("Enter n (array has n-1 elements from 1 to n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid\n");
        return 1;
    }

    printf("Enter %d elements: ", n - 1);
    for (i = 0; i < n - 1; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++)
        sum += arr[i];

    total = n * (n + 1) / 2;
    printf("Missing = %d\n", total - sum);

    return 0;
}
