#include <stdio.h>

int main(){
    int a , sum = 0, digit;

    printf("Write your favorite number = ");
    scanf("%d", &a);
    // a = 1321
    while( a != 0){ // a is not zero
        digit = a % 10; 
        // --> (1) 1321 % 10 = 1 
        // --> (2) 132 % 10 = 2  
        // --> (3) 13 % 10 = 3 
        // --> (3) 1 % 10 = 1 
        sum += digit; 
        // --> (1) 0 + 1 = 1 
        // --> (2) 1 + 2 = 3
        // --> (3) 3 + 3 = 6
        // --> (4) 6 + 1 = 7
        a /= 10; 
        // (1) 132 / 10 = 132
        // --> (2) 132 / 10 = 13
        // --> (3) 13 / 10 = 1
        // --> (4) 1 / 10 = 0
    }
    printf("The sum of your number %d is %d", a, sum);
}