/* Day 17 - Q66: Union of arrays */
#include <stdio.h>

int main(void) {
    int n1, n2, i, j, a[50], b[50], u[100], ulen = 0, found;

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

    for (i = 0; i < n1; i++) {
        found = 0;
        for (j = 0; j < ulen; j++) {
            if (u[j] == a[i]) {
                found = 1;
                break;
            }
        }
        if (!found)
            u[ulen++] = a[i];
    }

    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < ulen; j++) {
            if (u[j] == b[i]) {
                found = 1;
                break;
            }
        }
        if (!found)
            u[ulen++] = b[i];
    }

    printf("Union: ");
    for (i = 0; i < ulen; i++)
        printf("%d ", u[i]);
    printf("\n");

    return 0;
}
