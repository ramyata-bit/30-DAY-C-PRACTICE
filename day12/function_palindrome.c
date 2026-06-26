/* Day 12 - Q45: Write function for palindrome */
#include <stdio.h>

int is_palindrome(int n) {
    int temp = n, rev = 0, rem;

    if (temp < 0)
        temp = -temp;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (n < 0)
        rev = -rev;

    return n == rev;
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (is_palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
