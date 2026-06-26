/* Day 13 - Q49: Input and display array */
#include <stdio.h>

int main(void) {
    int n, i, arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
