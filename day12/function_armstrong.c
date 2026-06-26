/* Day 12 - Q46: Write function for Armstrong */
#include <stdio.h>
#include <math.h>

int is_armstrong(int n) {
    int temp, rem, digits = 0, sum = 0;

    if (n < 0)
        return 0;

    temp = n;
    if (temp == 0)
        digits = 1;
    else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }

    return sum == n;
}

int main(void) {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (is_armstrong(n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
