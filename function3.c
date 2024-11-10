// function without arguments but with return value  

#include <stdio.h>

int Luck(){ // it cant void function because has something to give
    return 222;
}

int main(){
     int num = Luck();
     printf("Your lucky number is %d", num);

}

