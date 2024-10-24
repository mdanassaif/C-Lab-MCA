#include <stdio.h>

int sum()
{
    int a, b;
    a = 100;
    b = 10;
    printf("%d", a + b);
    return 0;
}
// declaring function
int name()
{
    // defincation of function
    char name[] = "Mahiyuddin";
    printf("My name is %s", name);
    return 0;
}

int line() // user build function
{
    printf("\n---------------------------\n");
    return 0;
}

int main() //building function
{
    line();
    printf("The sum of numbers = ");
    sum();
    line();
    // calling name function
    name();
    line();
}


