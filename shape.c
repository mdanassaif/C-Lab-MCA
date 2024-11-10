/*

#include <stdio.h>

int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j <= i; j++){
            // i = 0, j = 0 : 0 <= 0 is true (prints + one time)
            // i = 1, j = 0 : 0 <= 1 is true (prints + two times: when j = 0 and j = 1)
            // i = 2, j = 0 : 0 <= 2 is true (prints + three times: when j = 0, j = 1, and j = 2)
            // i = 3 does not happen because the condition i < 3 stops the loop
            printf(" + ");
        }
        printf("\n");
    }
}
*/


#include <stdio.h>

int main(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j <= i; j++){
            // i = 0, j = 0 : 0 <= 0 is true (prints '1' one time)
            // i = 1, j = 0 : 0 <= 1 is true (prints '2' two times: when j = 0 and j = 1)
            // i = 2, j = 0 : 0 <= 2 is true (prints '3' three times: when j = 0, j = 1, and j = 2)
            // i = 3 does not happen because the condition i < 3 stops the loop
            printf(" %d ", i);
        }
        printf("\n\n");
    }
}