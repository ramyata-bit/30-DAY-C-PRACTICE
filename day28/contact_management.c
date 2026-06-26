/* Day 28 - Q112: Create contact management system */
#include <stdio.h>
#include <string.h>

#define MAX 10

struct Contact {
    char name[40];
    char phone[15];
};

int main(void) {
    struct Contact list[MAX];
    int n = 0, i, choice;
    char search[40];

    do {
        printf("\n1. Add contact\n2. View all\n3. Search\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1 && n < MAX) {
            printf("Name: ");
            fgets(list[n].name, sizeof(list[n].name), stdin);
            list[n].name[strcspn(list[n].name, "\n")] = '\0';
            printf("Phone: ");
            fgets(list[n].phone, sizeof(list[n].phone), stdin);
            list[n].phone[strcspn(list[n].phone, "\n")] = '\0';
            n++;
        } else if (choice == 2) {
            for (i = 0; i < n; i++)
                printf("%s - %s\n", list[i].name, list[i].phone);
        } else if (choice == 3) {
            printf("Enter name: ");
            fgets(search, sizeof(search), stdin);
            search[strcspn(search, "\n")] = '\0';
            for (i = 0; i < n; i++) {
                if (strcmp(list[i].name, search) == 0) {
                    printf("Phone: %s\n", list[i].phone);
                    break;
                }
            }
            if (i == n)
                printf("Not found\n");
        }
    } while (choice != 4);

    return 0;
}
