/* Day 14 - Q53: Linear search */
#include <stdio.h>

int main(void) {
    int n, i, key, arr[100], pos = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", pos);

    return 0;
}
