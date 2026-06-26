/* Day 13 - Q51: Find largest and smallest element */
#include <stdio.h>

int main(void) {
    int n, i, arr[100], max, min;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
