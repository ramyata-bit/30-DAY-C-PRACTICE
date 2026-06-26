/* Day 2 - Q8: Check whether a number is palindrome */
#include <stdio.h>

int main(void) {
    int n, temp, rev = 0, rem;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    if (temp < 0)
        temp = -temp;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (n < 0)
        rev = -rev;

    if (n == rev)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
