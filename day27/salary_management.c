/* Day 27 - Q107: Create salary management system */
#include <stdio.h>

struct Staff {
    int id;
    char name[40];
    float basic;
    float hra;
    float total;
};

int main(void) {
    struct Staff s[10];
    int n, i;

    printf("Enter staff count: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("ID: ");
        scanf("%d", &s[i].id);
        getchar();
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Basic salary: ");
        scanf("%f", &s[i].basic);
        getchar();

        s[i].hra = s[i].basic * 0.10f;
        s[i].total = s[i].basic + s[i].hra;
    }

    printf("\nSalary details:\n");
    for (i = 0; i < n; i++)
        printf("%d %s Basic=%.2f HRA=%.2f Total=%.2f\n",
               s[i].id, s[i].name, s[i].basic, s[i].hra, s[i].total);

    return 0;
}
