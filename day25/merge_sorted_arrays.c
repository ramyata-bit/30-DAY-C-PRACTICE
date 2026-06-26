/* Day 25 - Q97: Merge two sorted arrays */
#include <stdio.h>

int main(void) {
    int n1, n2, i, j, k, a[50], b[50], merged[100];

    printf("Size of first array: ");
    scanf("%d", &n1);
    printf("Enter sorted elements: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Size of second array: ");
    scanf("%d", &n2);
    printf("Enter sorted elements: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = j = k = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while (i < n1)
        merged[k++] = a[i++];
    while (j < n2)
        merged[k++] = b[j++];

    printf("Merged: ");
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
