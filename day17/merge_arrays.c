/* Day 17 - Q65: Merge arrays */
#include <stdio.h>

int main(void) {
    int n1, n2, i, a[50], b[50];

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

    printf("Merged: ");
    for (i = 0; i < n1; i++)
        printf("%d ", a[i]);
    for (i = 0; i < n2; i++)
        printf("%d ", b[i]);
    printf("\n");

    return 0;
}
