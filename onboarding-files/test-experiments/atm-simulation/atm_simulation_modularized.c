#include <stdio.h>
#include <stdbool.h>

void displayMenu() {
    printf("\n--- ATM Menu ---\n");
    printf("[1] Check Balance\n");
    printf("[2] Deposit\n");
    printf("[3] Withdraw\n");
    printf("[4] Exit\n");
    printf("Choose an option: ");
}

void checkBalance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

float depositMoney(float balance) {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    if (amount > 0) {
        balance += amount;
        printf("Deposit successful. New balance: $%.2f\n", balance);
    } else {
        printf("Invalid deposit amount.\n");
    }
    return balance;
}

float withdrawMoney(float balance) {
    float amount;
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
    return balance;
}

void exitATM() {
    printf("Thank you for banking with us.\n");
}

int main(){
    bool running = true;
    float balance = 1000.00;
    int choice;
    float amount;

    while (running)
    {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: checkBalance(balance);              break;
            case 2: balance = depositMoney(balance);    break;
            case 3: balance = withdrawMoney(balance);   break;
            case 4: exitATM(); running = false;         break;
            default: printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

