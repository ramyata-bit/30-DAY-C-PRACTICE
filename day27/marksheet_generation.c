/* Day 27 - Q108: Create marksheet generation system */
#include <stdio.h>

int main(void) {
    char name[50];
    int roll, m1, m2, m3, total;
    float avg;
    char grade;

    printf("Name: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Roll: ");
    scanf("%d", &roll);
    printf("Marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0f;

    if (avg >= 90) grade = 'A';
    else if (avg >= 75) grade = 'B';
    else if (avg >= 60) grade = 'C';
    else if (avg >= 40) grade = 'D';
    else grade = 'F';

    printf("\n-------- MARKSHEET --------\n");
    printf("Name  : %s\n", name);
    printf("Roll  : %d\n", roll);
    printf("Sub1  : %d\n", m1);
    printf("Sub2  : %d\n", m2);
    printf("Sub3  : %d\n", m3);
    printf("Total : %d\n", total);
    printf("Avg   : %.2f\n", avg);
    printf("Grade : %c\n", grade);

    return 0;
}
