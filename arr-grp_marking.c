#include <stdio.h>

int main()
{
    float value[20];
    int low, high, group[11] = {0};

    for (int i = 0; i < 20; i++)
    {
        scanf("%f", &value[i]);
        ++group[(int)(value[i]) / 10];
    }

    printf("\n");
    printf("GROUP RANGE FREQUENCY\n");
    for (int i = 0; i < 11; i++)
    {
        low = i * 10;
        if (i == 10)
            high = 100;
        else
            high = low + 9;
        printf(" %2d %4d to %4d %d\n", i + 1, low, high, group[i]);
    }

    return 0;
}