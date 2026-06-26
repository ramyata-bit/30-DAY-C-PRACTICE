/* Day 29 - Q113: Create menu-driven calculator */
#include <stdio.h>

int main(void) {
    int choice;
    double a, b;

    do {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) {
        case 1:
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("Result = %.2f\n", a / b);
            break;
        }
    } while (choice != 5);

    return 0;
}
