/* Day 29 - Q116: Create inventory management system */
#include <stdio.h>
#include <string.h>

#define MAX 8

struct Item {
    int code;
    char name[40];
    int qty;
    float price;
};

int main(void) {
    struct Item stock[MAX];
    int n = 0, i, choice, code, q;

    do {
        printf("\n1. Add item\n2. Show stock\n3. Sell item\n4. Restock\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1 && n < MAX) {
            printf("Code: ");
            scanf("%d", &stock[n].code);
            getchar();
            printf("Name: ");
            fgets(stock[n].name, sizeof(stock[n].name), stdin);
            stock[n].name[strcspn(stock[n].name, "\n")] = '\0';
            printf("Qty Price: ");
            scanf("%d %f", &stock[n].qty, &stock[n].price);
            n++;
        } else if (choice == 2) {
            for (i = 0; i < n; i++)
                printf("%d %s Qty=%d Price=%.2f\n",
                       stock[i].code, stock[i].name, stock[i].qty, stock[i].price);
        } else if (choice == 3) {
            printf("Item code: ");
            scanf("%d", &code);
            printf("Quantity sold: ");
            scanf("%d", &q);
            for (i = 0; i < n; i++) {
                if (stock[i].code == code) {
                    if (stock[i].qty >= q) {
                        stock[i].qty -= q;
                        printf("Sold. Total = %.2f\n", q * stock[i].price);
                    } else {
                        printf("Not enough stock\n");
                    }
                    break;
                }
            }
        } else if (choice == 4) {
            printf("Item code: ");
            scanf("%d", &code);
            printf("Add quantity: ");
            scanf("%d", &q);
            for (i = 0; i < n; i++) {
                if (stock[i].code == code) {
                    stock[i].qty += q;
                    printf("Updated\n");
                    break;
                }
            }
        }
    } while (choice != 5);

    return 0;
}
