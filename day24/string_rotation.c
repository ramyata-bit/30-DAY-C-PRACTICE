/* Day 24 - Q93: Check string rotation */
#include <stdio.h>
#include <string.h>

int is_rotation(char a[], char b[]) {
    char temp[400];
    int len_a, len_b;

    len_a = (int)strlen(a);
    len_b = (int)strlen(b);

    if (len_a != len_b)
        return 0;

    strcpy(temp, a);
    strcat(temp, a);

    if (strstr(temp, b) != NULL)
        return 1;
    return 0;
}

int main(void) {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);

    if (is_rotation(s1, s2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
