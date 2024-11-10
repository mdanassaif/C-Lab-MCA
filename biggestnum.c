#include <stdio.h>

int main(){
    int num[3];
    int big;

    printf("Write three numbers");
    for(int i = 0; i <3; i++){
        scanf("%d", &num[i]);
    }

    big = num[0];

    for(int i= 1; i < 3; i++){
      if ( big < num[i]){
        big = num[i];
       
      }
    }
     printf("The big number between three is = %d",big);
}