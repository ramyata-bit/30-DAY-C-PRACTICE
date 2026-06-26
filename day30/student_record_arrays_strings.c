/* Day 30 - Q117: Create student record system using arrays and strings */
#include <stdio.h>
#include <string.h>

#define MAX 25

int main(void) {
    int roll[MAX], n, i, choice, r;
    char name[MAX][50];
    float marks[MAX];

    printf("Students count: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Roll: ");
        scanf("%d", &roll[i]);
        getchar();
        printf("Name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';
        printf("Marks: ");
        scanf("%f", &marks[i]);
        getchar();
    }

    do {
        printf("\n1. Display\n2. Search\n3. Topper\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (i = 0; i < n; i++)
                printf("%d %s %.1f\n", roll[i], name[i], marks[i]);
        } else if (choice == 2) {
            printf("Roll: ");
            scanf("%d", &r);
            for (i = 0; i < n; i++) {
                if (roll[i] == r) {
                    printf("%s %.1f\n", name[i], marks[i]);
                    break;
                }
            }
        } else if (choice == 3) {
            int top = 0;
            for (i = 1; i < n; i++) {
                if (marks[i] > marks[top])
                    top = i;
            }
            printf("Topper: %s (%.1f)\n", name[top], marks[top]);
        }
    } while (choice != 4);

    return 0;
}
