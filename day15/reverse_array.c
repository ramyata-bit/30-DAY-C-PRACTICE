/* Day 15 - Q57: Reverse array */
#include <stdio.h>

int main(void) {
    int n, i, arr[100], temp;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
