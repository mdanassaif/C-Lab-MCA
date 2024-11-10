 

#include <stdio.h>

int main(){
    int x, i;

    printf("Write any number == ");
scanf("%d", &x);

// x = 5

 
i = 1;
while (x > 0) {
  
    i *= x;
    x--;

      // 5 > 0 --> 5 *1 = 5 now i = 5
    // 4 > 0 --> 5 * 4 = 20 now i = 20
    // 3 > 0 --> 3 * 20 = 60 now i = 60
    // 2 > 0 --> 2 * 60 = 120 now i = 120
    // 1 > 0 --> 1 * 120 npw i = 120 
    // 0 > 0 --> which is false then loop break go out of loop
}
printf("The factorial of %d is %d", x, i);
}