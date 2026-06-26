/* Day 26 - Q104: Create quiz application */
#include <stdio.h>

int main(void) {
    int score = 0;
    char ans;

    printf("Q1. Capital of India? (D/Delhi): ");
    scanf(" %c", &ans);
    if (ans == 'D' || ans == 'd')
        score++;

    printf("Q2. 2+2=? (4): ");
    scanf(" %c", &ans);
    if (ans == '4')
        score++;

    printf("Q3. Largest planet? (J/Jupiter): ");
    scanf(" %c", &ans);
    if (ans == 'J' || ans == 'j')
        score++;

    printf("Q4. C is a ___ language (H/high-level): ");
    scanf(" %c", &ans);
    if (ans == 'H' || ans == 'h')
        score++;

    printf("Score = %d/4\n", score);
    return 0;
}
