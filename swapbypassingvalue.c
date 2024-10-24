#include <stdio.h>

int main() {
int a;
int b;
int swapNum;  

printf("Write your favorite disntinct numbers. \n");
scanf("%d %d", &a, &b);

printf("\nThe numbers without swapping :\n");
printf("---------------------------------\n");
printf("First Number = %d ", a);
printf("Second Number = %d", b);
printf("\n---------------------------------\n\n");
 

swapNum = a;
a = b;
b = swapNum;

printf("\nThe numbers with swapping to each :\n");
printf("---------------------------------\n");
printf("First Number = %d ", a);
printf("Second Number = %d", b);
printf("\n---------------------------------");

}

int swap(int a, int b){
    int swapNum;
    swapNum = a;
a = b;
b = swapNum;
}