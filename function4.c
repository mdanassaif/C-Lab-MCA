// function with arguments and with return value as well

#include <stdio.h>

int Multiply(int a, int b){ // it cant void function because has something to give
    return a * b;
}

int main(){
    int x,y;
    printf("write your two numbers\n");
    scanf("%d%d", &x,&y);
    int ans = Multiply(x,y);
    printf("Your multiplication of your number is == %d\n", ans);

}

