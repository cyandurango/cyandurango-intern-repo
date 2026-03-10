#include <stdio.h>

int main() {
    float balance = 1000.00;
    int choice;
    float amount;
    int running = 1;

    while (running) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Your current balance is: $%.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Deposit successful. New balance: $%.2f\n", balance);
            } else {
                printf("Invalid deposit amount.\n");
            }
        } else if (choice == 3) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Please take your cash. New balance: $%.2f\n", balance);
            } else if (amount > balance) {
                printf("Insufficient funds.\n");
            } else {
                printf("Invalid withdrawal amount.\n");
            }
        } else if (choice == 4) {
            printf("Thank you for banking with us.\n");
            running = 0;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}