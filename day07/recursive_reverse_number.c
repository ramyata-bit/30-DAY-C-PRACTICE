/* Day 7 - Q28: Recursive reverse number */
#include <stdio.h>

int rev_helper(int n, int rev) {
    if (n == 0)
        return rev;
    return rev_helper(n / 10, rev * 10 + n % 10);
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Reversed = %d\n", -rev_helper(-n, 0));
    else
        printf("Reversed = %d\n", rev_helper(n, 0));

    return 0;
}
