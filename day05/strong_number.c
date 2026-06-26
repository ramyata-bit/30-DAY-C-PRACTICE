/* Day 5 - Q18: Check strong number */
#include <stdio.h>

int fact(int x) {
    int i, f = 1;
    for (i = 1; i <= x; i++)
        f *= i;
    return f;
}

int main(void) {
    int n, temp, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    if (temp < 0)
        temp = -temp;

    while (temp > 0) {
        rem = temp % 10;
        sum += fact(rem);
        temp /= 10;
    }

    if (sum == (n < 0 ? -n : n))
        printf("Strong\n");
    else
        printf("Not strong\n");

    return 0;
}
