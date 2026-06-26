/* Day 16 - Q63: Find pair with given sum */
#include <stdio.h>

int main(void) {
    int n, i, j, sum, arr[100], found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter sum: ");
    scanf("%d", &sum);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pair found\n");

    return 0;
}
