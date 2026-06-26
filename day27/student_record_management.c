/* Day 27 - Q105: Create student record management system */
#include <stdio.h>

#define MAX 20

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main(void) {
    struct Student s[MAX];
    int n, i, choice, roll;
    float total = 0;

    printf("How many students? ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }

    do {
        printf("\n1. Display all\n2. Search by roll\n3. Average marks\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (i = 0; i < n; i++)
                printf("%d %s %.1f\n", s[i].roll, s[i].name, s[i].marks);
        } else if (choice == 2) {
            printf("Enter roll: ");
            scanf("%d", &roll);
            for (i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    printf("%s %.1f\n", s[i].name, s[i].marks);
                    break;
                }
            }
            if (i == n)
                printf("Not found\n");
        } else if (choice == 3) {
            total = 0;
            for (i = 0; i < n; i++)
                total += s[i].marks;
            printf("Average = %.2f\n", total / n);
        }
    } while (choice != 4);

    return 0;
}
