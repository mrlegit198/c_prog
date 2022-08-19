#include <stdio.h>

int main()
{
    int row, col, product[5][5];

    printf("    ");
    for (int i = 1; i <= 5; i++)
    {
        printf("%4d", i);
    }
    printf("\n");
    printf("__________________________\n");

    for (int i = 0; i < 5; i++)
    {
        row = i + 1;

        printf("%2d |", row);

        for (int j = 1; j <= 5; j++)
        {
            product[i][j] = row * j;
            printf("%4d", product[i][j]);
        }
        printf("\n");
    }
}