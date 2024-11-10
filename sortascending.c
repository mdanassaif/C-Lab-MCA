#include <stdio.h>

void ascendingSorting(int arr[], int n){
    int temp;
    for(int i = 0; i < n-1; i++){ // n = 5-1 = 4
        for(int j = 0; j < n-i-1; j++){ // n - 1 - ( i = 0, 1, 2, 3)
            if (arr[j] > arr[j+1]){ // arr[0] = 9 > arr[1] = 4
                temp = arr[j]; // temp = 9;
                arr[j] = arr[j+1]; // arr[0] = 4
                arr[j+1] = temp; // arr[1] = 9
            }
        }
    }
}

int main(){
    int arr[] = {9, 4, 1, 5, 3};
    int n = 5;
    ascendingSorting(arr, n);
    printf("Array Sorted in ascending order\n");

    for( int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

}