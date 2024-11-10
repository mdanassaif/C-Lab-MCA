#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    char againCalc;

    do
    {
        printf("-------------------\n");
        printf("-------menu--------\n");
        printf("-------------------\n");
        printf("1. Add\n2. Sub\n3. Multi\n4. Exit\n");
        printf("\n\n Write your choice by num b/w 1-4\\n\n");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
        {
            printf("Enter any two numbers\n");
            scanf("%d%d", &b, &c);
            printf("The sum of your numbers = %d\n", b + c);
            break;
        }
        case 2:
        {
            printf("Enter any two numbers\n");
            scanf("%d%d", &b, &c);
            printf("The sub of your numbers = %d\n", b - c);
            break;
        }
        case 3:
        {
            printf("Enter any two numbers\n");
            scanf("%d%d", &b, &c);
            printf("The mul of your numbers = %d\n", b * c);
            break;
        }
        case 4:
        {
            printf("Exiting the program, Good Bye!\n");
            exit(0);
        }
        default:
            printf("please write a number b/w 1-4\n");
            break;
        }
        printf("\n Do you want to try again or not? Then Write Y\n");
        scanf(" %c", &againCalc);
    } while (againCalc == 'Y');
    printf("See you soon. \n");
}