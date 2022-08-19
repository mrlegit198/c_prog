#include <stdio.h>

int main()
{
    int car, response[5][5] = {{0}, {0}, {0}, {0}, {0}};
    char city;

    printf("CITY CODE :- \t CAR CODE :- \n M - MADRAS \t 1 - AMBASSADOR \n B - BOMBAY \t 2 - MARUTI \n C - CALCUTTA \t 3 - FORD \n D - DELHI \t 4 - TATA \n");

    printf("ENTER THE CITY CODE FOLLOWED BY CAR CODE (ENTER X TO END): \n");

    for (int i = 1; i < 100; i++)
    {
        scanf("%c", &city);

        if (city == 'X')
            
            break;

        scanf("%d",&car);

        switch (city)
        {
        case 'M':
            response[1][car]++;
            break;
        case 'B':
            response[2][car]++;
            break;
        case 'C':
            response[3][car]++;
            break;
        case 'D':
            response[4][car]++;
            break;

        default:
            break;
        }
    }

    printf("\n\t\tPOPULARITYTABLE\t\t\n\n");
    printf("City     Ambassador  Fiat  Dolphin  Maruti \n");
    for (int i = 1; i <= 4; i++)
    {
        switch (i)
        {
        case 1:
            printf("MADRAS ");
            break;
        case 2:
            printf("BOMBAY ");
            break;
        case 3:
            printf("CALCUTA ");
            break;
        case 4:
            printf("DELHI ");
            break;

        default:
            break;
        }

        for (int j = 1; j <= 4; j++)
        {
            printf("%7d", response[i][j]);
        }
        printf("\n");
    }
}