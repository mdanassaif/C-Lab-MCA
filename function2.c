// function with arguments but without return value  

#include <stdio.h>

void Sum(int a, int b){
    int sum = a + b;
    printf("The sum is : %d\n", sum);
}

int main(){
    int x = 5 , y = 7;
    Sum(x,y);
    

}

