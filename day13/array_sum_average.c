/* Day 13 - Q50: Find sum and average of array */
#include <stdio.h>

int main(void) {
    int n, i, arr[100];
    long long sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", (float)sum / n);

    return 0;
}
