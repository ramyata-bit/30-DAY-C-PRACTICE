/* Day 17 - Q68: Find common elements */
#include <stdio.h>

int main(void) {
    int n1, n2, i, j, a[50], b[50];

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

    printf("Common: ");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
