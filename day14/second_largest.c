/* Day 14 - Q55: Second largest element */
#include <stdio.h>

int main(void) {
    int n, i, arr[100], max, second;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least 2 elements\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (arr[0] > arr[1]) {
        max = arr[0];
        second = arr[1];
    } else {
        max = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    printf("Second largest = %d\n", second);

    return 0;
}
