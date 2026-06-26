/* Day 4 - Q15: Check Armstrong number */
#include <stdio.h>
#include <math.h>

int main(void) {
    int n, temp, rem, digits = 0, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    if (temp < 0)
        temp = -temp;

    if (temp == 0)
        digits = 1;
    else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    if (temp < 0)
        temp = -temp;

    while (temp > 0) {
        rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }

    if (sum == (n < 0 ? -n : n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
