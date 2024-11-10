#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;
    bool isPrime = true;

    printf("Write your fav number to check it's prime or not = ");
    scanf("%d", &x);

    if(x <= 1){
        isPrime = false;

    }else{
        // x = 29
        for(int i = 2; i * i <= x; i++){
            //2 *2 = 4 < 29 -->> will check --> if x % 2 !== 0 so will go on next i = 3
            // 3*3 = 9 < 29 --> will check -->  if x % 2 !== 0 so will go on next i = 4
            // 4*4 = 16 < 29 --> will check -->  if x % 2 !== 0 so will go on next i = 5
            // 5*5 = 25 < 29 --> will check -->  if x % 2 !== 0 so will go on next i = 6
            // 6*6 = 36 < 29 --> will go out of loop
            if(x % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime){
        printf("Your number %d is prime number",x);
    }else{
        printf("Your number %d is not a prime number",x);
    }
}