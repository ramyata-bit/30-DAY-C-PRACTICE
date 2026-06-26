/* Day 18 - Q70: Selection sort */
#include <stdio.h>

int main(void) {
    int n, i, j, min, arr[100], temp;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
