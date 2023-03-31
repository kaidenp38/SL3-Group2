#include <stdio.h>

int main() {
    int choice = 0;

    do {
        printf("1. Buy ticket\n");
        printf("2. Change/cancel ticket\n");
        printf("3. Quit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            printf("Buying a ticket...\n");
            // Code for buying a ticket
            break;
        case 2:
            printf("Changing/canceling a ticket...\n");
            // Code for changing/canceling a ticket
            break;
        case 3:
            printf("Exiting program...\n");
            // Exit the program
            return 0;
        default:
            printf("Invalid choice. Please try again\n");
            break;
        }
    } while (1);

    return 0;
}