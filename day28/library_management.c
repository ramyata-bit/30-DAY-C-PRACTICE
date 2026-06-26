/* Day 28 - Q109: Create library management system */
#include <stdio.h>
#include <string.h>

#define MAX 10

struct Book {
    int id;
    char title[60];
    char author[40];
    int available;
};

int main(void) {
    struct Book books[MAX];
    int n = 0, i, choice, id;

    do {
        printf("\n1. Add book\n2. Display\n3. Issue book\n4. Return book\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1 && n < MAX) {
            printf("ID: ");
            scanf("%d", &books[n].id);
            getchar();
            printf("Title: ");
            fgets(books[n].title, sizeof(books[n].title), stdin);
            books[n].title[strcspn(books[n].title, "\n")] = '\0';
            printf("Author: ");
            fgets(books[n].author, sizeof(books[n].author), stdin);
            books[n].author[strcspn(books[n].author, "\n")] = '\0';
            books[n].available = 1;
            n++;
        } else if (choice == 2) {
            for (i = 0; i < n; i++)
                printf("%d | %s | %s | %s\n", books[i].id, books[i].title,
                       books[i].author, books[i].available ? "Yes" : "No");
        } else if (choice == 3) {
            printf("Book ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++) {
                if (books[i].id == id && books[i].available) {
                    books[i].available = 0;
                    printf("Issued\n");
                    break;
                }
            }
            if (i == n)
                printf("Not available\n");
        } else if (choice == 4) {
            printf("Book ID: ");
            scanf("%d", &id);
            for (i = 0; i < n; i++) {
                if (books[i].id == id && !books[i].available) {
                    books[i].available = 1;
                    printf("Returned\n");
                    break;
                }
            }
        }
    } while (choice != 5);

    return 0;
}
