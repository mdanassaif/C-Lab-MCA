#include <stdio.h>

int main(){
    int n;

    struct BookDetails{
        char bookName[30];
        float bookPrice;
        int bookPages;
    };

    printf("How many books you want to store == ");
    scanf("%d", &n);

    

    struct BookDetails myCollection[n];


    for(int i=0; i<n; i++){
        printf("Book %d\n",i+1);

        printf("Enter Book Name == ");
        scanf("%s", &myCollection[i].bookName);

        printf("Enter Book Price == ");
        scanf("%f", &myCollection[i].bookPrice);

        printf("Enter Book Pages == ");
        scanf("%d", &myCollection[i].bookPages);
    }

    printf("Your collections\n");
    printf("---------------\n");
    for(int i = 0; i < n; i++){
        printf("Book %d", i+1);
        printf("Book Name = %s\n", myCollection[i].bookName);
        printf("Book Price = %.2f\n", myCollection[i].bookPrice);
        printf("Book pages = %d\n", myCollection[i].bookPages);
    }
}