#include <stdio.h>

int main()
{
    int a, sum = 0;
    printf("Write the last number from 1 you want addition == ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    printf("the sum of your numbe is %d", sum);
}