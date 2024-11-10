#include <stdio.h>

int main(){
    int a, b;
    int *ptrA, *ptrB;

    printf("Enter the first number == ");
    scanf("%d", &a);

    printf("Enter the second number == ");
    scanf("%d", &b);

    // Assign pointers to the the address of a and b

    ptrA = &a;
    ptrB = &b;

    // perform arithmetic operations

    printf("\n Arithmetic operation using pointers:\n");

    // addition 
    printf("Addition : %d + %d = %d\n", *ptrA, *ptrB, *ptrA + *ptrB);

    // substraction 
    printf("Substraction : %d + %d = %d\n", *ptrA, *ptrB, *ptrA - *ptrB);

    // multiplication 
    printf("Multiplication : %d + %d = %d\n", *ptrA, *ptrB, *ptrA * *ptrB);

    // division 
    printf("Division : %d + %d = %d\n", *ptrA, *ptrB, (*ptrB != 0 ? *ptrA / *ptrB:0));

    // modulous
    printf("Modulous : %d + %d = %d\n", *ptrA, *ptrB, (*ptrB != 0 ? *ptrA % *ptrB:0));



}