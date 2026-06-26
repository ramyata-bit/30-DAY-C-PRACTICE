/* Day 4 - Q16: Print Armstrong numbers in a range */
#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int temp, rem, digits = 0, sum = 0;

    if (num < 0)
        return 0;

    temp = num;
    if (temp == 0)
        digits = 1;
    else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }

    temp = num;
    while (temp > 0) {
        rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }

    return sum == num;
}

int main(void) {
    int low, high, n;

    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);

    if (low > high) {
        int t = low;
        low = high;
        high = t;
    }

    printf("Armstrong numbers: ");
    for (n = low; n <= high; n++) {
        if (is_armstrong(n))
            printf("%d ", n);
    }
    printf("\n");

    return 0;
}
