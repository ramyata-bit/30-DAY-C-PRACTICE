/* Day 26 - Q103: Create ATM simulation */
#include <stdio.h>

int main(void) {
    int choice;
    float balance = 10000.0f, amount;

    while (1) {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 4)
            break;

        switch (choice) {
        case 1:
            printf("Balance = %.2f\n", balance);
            break;
        case 2:
            printf("Amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposited\n");
            break;
        case 3:
            printf("Amount: ");
            scanf("%f", &amount);
            if (amount > balance)
                printf("Insufficient balance\n");
            else {
                balance -= amount;
                printf("Withdrawn\n");
            }
            break;
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
