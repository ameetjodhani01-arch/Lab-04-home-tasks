#include <stdio.h>

int main() {
    int balance, amount;

    printf("Enter balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (amount % 500 == 0 && amount <= balance && amount <= 25000) {
        balance = balance - amount;

        printf("Withdrawal successful. Remaining balance: %d\n", balance);
    }
    else {
        if (amount % 500 != 0) {
            printf("Withdrawal failed: Amount must be a multiple of 500.\n");
        }
        else if (amount > balance) {
            printf("Withdrawal failed: Insufficient balance.\n");
        }
        else if (amount > 25000) {
            printf("Withdrawal failed: Daily withdrawal limit is 25000.\n");
        }
    }

    return 0;
}
