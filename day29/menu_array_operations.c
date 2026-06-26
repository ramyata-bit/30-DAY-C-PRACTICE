/* Day 29 - Q114: Create menu-driven array operations system */
#include <stdio.h>

int main(void) {
    int arr[100], n = 0, choice, i, val, pos, temp;

    do {
        printf("\n1. Input array\n2. Display\n3. Search\n4. Reverse\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Size: ");
            scanf("%d", &n);
            printf("Elements: ");
            for (i = 0; i < n; i++)
                scanf("%d", &arr[i]);
        } else if (choice == 2) {
            for (i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 3) {
            printf("Value to search: ");
            scanf("%d", &val);
            for (i = 0; i < n; i++) {
                if (arr[i] == val) {
                    printf("Found at %d\n", i);
                    break;
                }
            }
            if (i == n)
                printf("Not found\n");
        } else if (choice == 4) {
            for (i = 0; i < n / 2; i++) {
                temp = arr[i];
                arr[i] = arr[n - 1 - i];
                arr[n - 1 - i] = temp;
            }
            printf("Reversed\n");
        }
    } while (choice != 5);

    return 0;
}
