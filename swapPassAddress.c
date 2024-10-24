#include <stdio.h>

void swap(int *, int *);

int main() {
    int a;
    int b;
    printf("Write Your favorite Number for A = ");
    scanf("%d", &a);
    printf("Write Your favorite Number for B = ");
    scanf("%d", &b);
    
    printf("***** Before Swapping ******\n");
    printf("A value = %d and B value = %d\n", a, b);  
    swap(&a, &b); // formal arguments
    printf("***** After Swapping ******\n");
    printf("A value = %d and B value = %d", a, b);  
}

void swap(int *p, int *q) { // actual arguments
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}