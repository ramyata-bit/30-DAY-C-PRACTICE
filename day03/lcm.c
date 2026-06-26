/* Day 3 - Q12: Find LCM of two numbers */
#include <stdio.h>

int main(void) {
    int a, b, x, y, t, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;
    if (x < 0) x = -x;
    if (y < 0) y = -y;

    while (y != 0) {
        t = y;
        y = x % y;
        x = t;
    }

    if (x == 0)
        lcm = 0;
    else {
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        lcm = (a / x) * b;
    }

    printf("LCM = %d\n", lcm);
    return 0;
}
