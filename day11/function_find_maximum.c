/* Day 11 - Q42: Write function to find maximum */
#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum = %d\n", max(a, b));
    return 0;
}
