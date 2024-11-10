#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    bool isPrime = true;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}