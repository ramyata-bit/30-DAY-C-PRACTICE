/* Day 14 - Q54: Frequency of an element */
#include <stdio.h>

int main(void) {
    int n, i, key, arr[100], count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }

    printf("Frequency = %d\n", count);

    return 0;
}
