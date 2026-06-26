/* Day 14 - Q56: Find duplicates in array */
#include <stdio.h>

int main(void) {
    int n, i, j, arr[100], found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicates: ");
    for (i = 0; i < n; i++) {
        int dup = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            int count = 0;
            for (j = i + 1; j < n; j++) {
                if (arr[j] == arr[i])
                    count++;
            }
            if (count > 0) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("None");
    printf("\n");

    return 0;
}
