/* Day 11 - Q41: Write function to find sum of two numbers */
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", add(a, b));
    return 0;
}
