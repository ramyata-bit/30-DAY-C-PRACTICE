/* Day 30 - Q120: Develop complete mini project using arrays, strings and functions */
#include <stdio.h>
#include <string.h>

#define MAX 30

struct Student {
    int roll;
    char name[40];
    int present;
};

void input_students(struct Student s[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        s[i].present = 0;
    }
}

void mark_attendance(struct Student s[], int n) {
    int i, roll, found = 0;
    printf("Roll to mark present: ");
    scanf("%d", &roll);
    for (i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            s[i].present = 1;
            printf("Marked present\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Roll not found\n");
}

void show_report(struct Student s[], int n) {
    int i, present = 0;
    printf("\nRoll  Name                Status\n");
    for (i = 0; i < n; i++) {
        printf("%-5d %-18s %s\n", s[i].roll, s[i].name,
               s[i].present ? "Present" : "Absent");
        if (s[i].present)
            present++;
    }
    printf("Attendance = %d/%d\n", present, n);
}

int main(void) {
    struct Student students[MAX];
    int n, choice;

    printf("Number of students: ");
    scanf("%d", &n);
    input_students(students, n);

    do {
        printf("\n1. Mark attendance\n2. Show report\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1)
            mark_attendance(students, n);
        else if (choice == 2)
            show_report(students, n);
    } while (choice != 3);

    return 0;
}
