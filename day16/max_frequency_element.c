/* Day 16 - Q62: Find maximum frequency element */
#include <stdio.h>

int main(void) {
    int n, i, j, arr[100], max_freq = 0, elem;

    printf("Enter size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
        return 1;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    elem = arr[0];
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > max_freq) {
            max_freq = count;
            elem = arr[i];
        }
    }

    printf("Element = %d, Frequency = %d\n", elem, max_freq);

    return 0;
}
