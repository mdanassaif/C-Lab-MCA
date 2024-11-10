#include <stdio.h>

int main()
{
    int i, j;
    printf("Write how many rows you want == ");
    scanf("%d", &i);
    printf("Write how many rows you want == ");
    scanf("%d", &j);

    int matX[i][j];
    int matY[i][j];

    // asking values for matX
    printf("Write %d values for matX\n", i * j);
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            scanf("%d", &matX[x][y]);
        }
    }

    // asking values for matY
    printf("Write %d values for matY\n", i * j);
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            scanf("%d", &matY[x][y]);
        }
    }

    // sum of matX &
    printf("The sum of your both matrix\n");
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf(" %d ", matX[x][y] + matY[x][y]);
        }
        printf("\n");
    }
}