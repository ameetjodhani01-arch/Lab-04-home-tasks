#include <stdio.h>

int main() {
    int choice, num, i, isPrime;

    do {
        printf("\n1. Even/Odd  2. Prime  3. Square  4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0) {
                    printf("%d is Even\n", num);
                }
                else {
                    printf("%d is Odd\n", num);
                }
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                isPrime = 1;

                if (num <= 1) {
                    isPrime = 0;
                }
                else {
                    for (i = 2; i * i <= num; i++) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime) {
                    printf("%d is Prime\n", num);
                }
                else {
                    printf("%d is Not Prime\n", num);
                }
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                printf("Square of %d = %d\n", num, num * num);
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
