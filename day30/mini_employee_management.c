/* Day 30 - Q119: Create mini employee management system */
#include <stdio.h>
#include <string.h>

struct Emp {
    int id;
    char name[40];
    float salary;
};

void show_all(struct Emp e[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d | %s | %.2f\n", e[i].id, e[i].name, e[i].salary);
}

int find_emp(struct Emp e[], int n, int id) {
    int i;
    for (i = 0; i < n; i++) {
        if (e[i].id == id)
            return i;
    }
    return -1;
}

int main(void) {
    struct Emp team[5];
    int n = 2, choice, id, idx;

    strcpy(team[0].name, "Ravi");
    team[0].id = 1;
    team[0].salary = 35000;

    strcpy(team[1].name, "Anita");
    team[1].id = 2;
    team[1].salary = 42000;

    do {
        printf("\n1. Show employees\n2. Add employee\n3. Update salary\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            show_all(team, n);
        } else if (choice == 2 && n < 5) {
            printf("ID: ");
            scanf("%d", &team[n].id);
            getchar();
            printf("Name: ");
            fgets(team[n].name, sizeof(team[n].name), stdin);
            team[n].name[strcspn(team[n].name, "\n")] = '\0';
            printf("Salary: ");
            scanf("%f", &team[n].salary);
            n++;
        } else if (choice == 3) {
            printf("Employee ID: ");
            scanf("%d", &id);
            idx = find_emp(team, n, id);
            if (idx == -1) {
                printf("Not found\n");
            } else {
                printf("New salary: ");
                scanf("%f", &team[idx].salary);
            }
        }
    } while (choice != 4);

    return 0;
}
