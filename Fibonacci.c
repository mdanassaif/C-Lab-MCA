#include <stdio.h>

void getFibonacci(int n) {
    int termOne = 0, termTwo = 1, nextTerm;

    printf("Fibonacci Sequence: %d, %d", termOne, termTwo);

    for (int i = 2; i < n; ++i) {
        nextTerm = termOne + termTwo;
        printf(", %d", nextTerm);
        termOne = termTwo;
        termTwo = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the terms you want from 2 ");
    scanf("%d", &n);

    if (n < 2) {
        printf("I accept only those number which is greater than 2. \n");
    } else {
        getFibonacci(n);
    }

    return 0;
}
