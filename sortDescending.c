#include <stdio.h>

void descendingSorting(int arr[], int n){
    int temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {9, 4, 1, 5, 3};
    int n = 5;
    descendingSorting(arr, n);
    printf("Array Sorted in descending order\n");

    for( int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

}