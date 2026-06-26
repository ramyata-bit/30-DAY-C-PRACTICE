/* Day 28 - Q111: Create ticket booking system */
#include <stdio.h>

#define SEATS 20

int main(void) {
    int seats[SEATS] = {0};
    int i, choice, num, count = 0;

    do {
        printf("\n1. Show seats\n2. Book seat\n3. Cancel seat\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (i = 0; i < SEATS; i++)
                printf("%d:%s ", i + 1, seats[i] ? "Booked" : "Free");
            printf("\nBooked = %d\n", count);
        } else if (choice == 2) {
            printf("Seat number (1-%d): ", SEATS);
            scanf("%d", &num);
            if (num >= 1 && num <= SEATS && !seats[num - 1]) {
                seats[num - 1] = 1;
                count++;
                printf("Booked seat %d\n", num);
            } else {
                printf("Invalid or already booked\n");
            }
        } else if (choice == 3) {
            printf("Seat number: ");
            scanf("%d", &num);
            if (num >= 1 && num <= SEATS && seats[num - 1]) {
                seats[num - 1] = 0;
                count--;
                printf("Cancelled\n");
            }
        }
    } while (choice != 4);

    return 0;
}
