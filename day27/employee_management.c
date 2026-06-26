/* Day 27 - Q106: Create employee management system */
#include <stdio.h>

#define MAX 15

struct Employee {
    int id;
    char name[50];
    char dept[30];
};

int main(void) {
    struct Employee emp[MAX];
    int n, i, choice, id;

    printf("Number of employees: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("ID: ");
        scanf("%d", &emp[i].id);
        getchar();
        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';
        printf("Department: ");
        fgets(emp[i].dept, sizeof(emp[i].dept), stdin);
        emp[i].dept[strcspn(emp[i].dept, "\n")] = '\0';
    }

    do {
        printf("\n1. List employees\n2. Search by ID\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (i = 0; i < n; i++)
                printf("%d | %s | %s\n", emp[i].id, emp[i].name, emp[i].dept);
        } else if (choice == 2) {
            printf("Enter ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    printf("%s works in %s\n", emp[i].name, emp[i].dept);
                    break;
                }
            }
            if (i == n)
                printf("Not found\n");
        }
    } while (choice != 3);

    return 0;
}
