/* Day 6 - Q22: Convert binary to decimal */
#include <stdio.h>
#include <string.h>

int main(void) {
    char bin[65];
    int i, dec = 0, len;

    printf("Enter binary: ");
    scanf("%64s", bin);

    len = (int)strlen(bin);
    for (i = 0; i < len; i++) {
        if (bin[i] != '0' && bin[i] != '1') {
            printf("Invalid binary\n");
            return 1;
        }
        dec = dec * 2 + (bin[i] - '0');
    }

    printf("Decimal = %d\n", dec);
    return 0;
}
