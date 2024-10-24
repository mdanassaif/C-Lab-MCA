#include <stdio.h>

int main() {
    int myNumber;

    printf("Enter Your favorite Number: ");
    scanf("%d", &myNumber);

    if (myNumber % 2 == 0) {
        printf("%d is even.\n", myNumber);
    } else {
        printf("%d is odd.\n", myNumber);
    }

    return 0;
}