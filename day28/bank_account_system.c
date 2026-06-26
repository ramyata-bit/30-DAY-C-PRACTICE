/* Day 28 - Q110: Create bank account system */
#include <stdio.h>
#include <string.h>

struct Account {
    int acc_no;
    char name[40];
    float balance;
};

int main(void) {
    struct Account acc;
    int choice;
    float amt;

    printf("Account number: ");
    scanf("%d", &acc.acc_no);
    getchar();
    printf("Name: ");
    fgets(acc.name, sizeof(acc.name), stdin);
    acc.name[strcspn(acc.name, "\n")] = '\0';
    printf("Opening balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n1. Deposit\n2. Withdraw\n3. Show details\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Amount: ");
            scanf("%f", &amt);
            acc.balance += amt;
        } else if (choice == 2) {
            printf("Amount: ");
            scanf("%f", &amt);
            if (amt > acc.balance)
                printf("Low balance\n");
            else
                acc.balance -= amt;
        } else if (choice == 3) {
            printf("A/C %d | %s | Balance %.2f\n", acc.acc_no, acc.name, acc.balance);
        }
    } while (choice != 4);

    return 0;
}
