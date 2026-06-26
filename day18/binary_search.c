/* Day 18 - Q71: Binary search */
#include <stdio.h>

int main(void) {
    int n, i, key, arr[100], low, high, mid, pos = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            pos = mid;
            break;
        }
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (pos == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", pos);

    return 0;
}
