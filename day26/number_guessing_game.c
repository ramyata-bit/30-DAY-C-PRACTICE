/* Day 26 - Q101: Create number guessing game */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num, guess, tries = 0;

    srand((unsigned)time(NULL));
    num = rand() % 100 + 1;

    printf("Guess a number between 1 and 100\n");

    do {
        printf("Your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
            printf("Too high\n");
        else if (guess < num)
            printf("Too low\n");
    } while (guess != num);

    printf("Correct! Tries = %d\n", tries);
    return 0;
}
