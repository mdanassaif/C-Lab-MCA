#include <stdio.h> 

int main() // Main function
{
    int a = 100;  int b = 200;
    int *ptr, *qtr;
    ptr = &a;  qtr = &b;


    //// FOR variable A
    printf("Value of a: %d\n", a); //value of 'a'
    printf("Value pointed to by ptr: %d\n", *ptr); //value at the address stored in 'ptr'
    printf("Address of a: %u\n", &a); //address of 'a'
    printf("Address stored in ptr: %u\n", ptr); //address stored in 'ptr'--> (address of a)


   printf("\n***********Border************\n\n");
 
    //// FOR variable B
    printf("Value of b: %d\n", b); //value of 'b'
    printf("Value pointed to by qtr: %d\n", *qtr); //value at the address stored in 'qtr'
    printf("Address of b: %u\n", &b); //address of 'b'
    printf("Address stored in qtr: %u\n", qtr); //address stored in 'qtr'--> (address of b)
    
    // sum of two pointer variables

    printf("\n----Sum of Two Pointer Variables------\n");
    printf("%d\n", a + b); // directly with a and b value access
    printf("%d\n", *ptr + *qtr); // through addresses access of a && b 
    printf("\n----Minus of Two Pointer Variables------\n");
    printf("%d\n", a - b); // directly with a and b value access
    printf("%d\n", *ptr - *qtr); // through addresses access of a && b 
    printf("\n----Multplication of Two Pointer Variables------\n");
    printf("%d\n", a * b); // directly with a and b value access
    printf("%d\n", *ptr * *qtr); // through addresses access of a && b 
    printf("\n----Division of Two Pointer Variables------\n");
    printf("%d\n", a / b); // directly with a and b value access
    printf("%d\n", *ptr / *qtr); // through addresses access of a && b 

    // sum of two pointer variables's address

    printf("\n----Sum of Two Pointer Variables------\n");

    // can increament, decreament and compare with address of variables
    printf("%u\n", &a + 1); // directly with a value access
    printf("%u\n", ptr + 100);  // through addresses access of a
   

}
