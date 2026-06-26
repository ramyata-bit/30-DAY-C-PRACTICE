/* Day 26 - Q102: Create voting eligibility system */
#include <stdio.h>

int main(void) {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible. Wait %d more year(s)\n", 18 - age);

    return 0;
}
