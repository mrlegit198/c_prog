#include <stdio.h>

int main()
{
    int val[4][3];
    int stf_total[4], itm_total[3], total;

    printf("Input Data : ");

    for (int i = 0; i < 4; i++)
    {
        stf_total[i] = 0;

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &val[i][j]);
            stf_total[i] = stf_total[i] + val[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        itm_total[i] = 0;

        for (int j = 0; j < 4; j++)
        {
            itm_total[i] += val[i][j];
        }
    }

    total = 0;
    for (int i = 0; i < 4; i++)
    {
        total += stf_total[i];
    }

    printf("\n\nSTAFF TOTAL\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("SALES_PERSON[%d] = %d\n", i + 1, stf_total[i]);
    }

    printf("\n\nITEM_TOTAL\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("ITEM[%d] = %d\n", i + 1, itm_total[i]);
    }

    printf("\nGRAND TOTAL = %d", total);
}