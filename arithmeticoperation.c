// perform all arithmetic operations
#include <stdio.h>

int main()
{
    int x, y;
    char opr;
    printf("Write your first number\n");
    scanf("%d", &x);
    printf("Write your second number\n");
    scanf("%d", &y);
    printf("Write your operation ( +, -, *, /, %%) : ");
    scanf(" %c", &opr);

    switch (opr){
    case '+':
        printf("The sum of your number is = %d", x + y);
        break;
    case '-':
        printf("The sum of your number is = %d", x + y);
        break;
    case '*':
        printf("The sum of your number is = %d", x + y);
        break;
    case '/':
        printf("The sum of your number is = %d", x + y);
        break;
    case '%':
        printf("The sum of your number is = %d", x + y);
        break;
    default:
        printf("Write right operator");
        break;
    }
}