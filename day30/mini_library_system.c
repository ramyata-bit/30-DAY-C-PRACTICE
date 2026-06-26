/* Day 30 - Q118: Create mini library system */
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    int issued;
};

int main(void) {
    struct Book lib[5] = {
        {101, "Let Us C", 0},
        {102, "Data Structures", 0},
        {103, "Operating Systems", 0}
    };
    int total = 3, i, choice, id;

    do {
        printf("\n--- Mini Library ---\n");
        printf("1. List books\n2. Issue\n3. Return\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (i = 0; i < total; i++)
                printf("%d %s [%s]\n", lib[i].id, lib[i].title,
                       lib[i].issued ? "Issued" : "Available");
        } else if (choice == 2) {
            printf("Book ID: ");
            scanf("%d", &id);
            for (i = 0; i < total; i++) {
                if (lib[i].id == id && !lib[i].issued) {
                    lib[i].issued = 1;
                    printf("Book issued\n");
                    break;
                }
            }
            if (i == total)
                printf("Cannot issue\n");
        } else if (choice == 3) {
            printf("Book ID: ");
            scanf("%d", &id);
            for (i = 0; i < total; i++) {
                if (lib[i].id == id && lib[i].issued) {
                    lib[i].issued = 0;
                    printf("Returned\n");
                    break;
                }
            }
        }
    } while (choice != 4);

    return 0;
}
