/* Day 17 - Q67: Intersection of arrays */
#include <stdio.h>

int main(void) {
    int n1, n2, i, j, a[50], b[50], printed;

    printf("Size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Intersection: ");
    printed = 0;
    for (i = 0; i < n1; i++) {
        int dup = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                dup = 1;
                break;
            }
        }
        if (dup)
            continue;

        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                printed = 1;
                break;
            }
        }
    }

    if (!printed)
        printf("None");
    printf("\n");

    return 0;
}
