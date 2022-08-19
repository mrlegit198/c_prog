#include <stdio.h>

int main()
{
    int M[5][6], S[5][6], C[6], Mval[5][6], Sval[5][6], Mweek[5], Sweek[5], Mprod[6], Sprod[6], Mtotal, Stotal, num;

    printf("ENTER THE PRODUCT MANUFACTURED WEK WISE : \n");
    printf("M11,M12,--, M21,M22,--etc\n");

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    printf("ENTER PRODUCT SOLD WEEK_WISE\n");
    printf("S11,S12,--, S21,S22,-- stc\n");
    for (int i = 1; i < +4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &S[i][j]);
        }
    }

    printf("COST OF EACH PRODUCT : \n");
    for (int i = 1; i <= 4; i++)
    {
        scanf("%d", &C[i]);
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            Mval[i][j] += M[i][j] * C[j];
            Sval[i][j] += S[i][j] * C[j];
        }
    }

    for (int i = 1; i <= 4; i++)
    {
        Mweek[i] = 0;
        Sweek[i] = 0;

        for (int j = 1; j <= 5; j++)
        {
            Mweek[i] += Mval[i][j];
            Sweek[i] += Sval[i][j];
        }
    }

    for (int i = 1; i <= 5; i++)
    {
        Mprod[i] = 0;
        Sprod[i] = 0;

        for (int j = 1; j <= 4; j++)
        {
            Mprod[j] += Mval[i][j];
            Sprod[j] += Sval[i][j];
        }
    }

    Mtotal = Stotal = 0;
    for (int i = 1; i <= 4; i++)
    {
        Mtotal += Mweek[i];
        Stotal += Sweek[i];
    }

    printf("\n\n");
    printf("FOLLOWING is THE LIST OF THINGS YOU CAN \n");
    printf("REQUEST FOR. ENTER APPROPIATE ITEM NUMBER : \n");
    printf("1. VALUE MATRIX OF PRODUCTION \n");
    printf("2. TOTAL VALUE OF WEEKLY PRODUCTION & SALES \n");
    printf("3. PRODUCT_WISE MONTHLY VALUE OF PRODUCTION & SALES \n");
    printf("4. GRAND TOTAL VALUE OF PRODUCTION & SALES \n");
    printf("5. EXIT");

    num = 0;

    while (1)
    {
        printf("\n\nENTER YOUR CHOICE : ");
        scanf("%d", &num);
        printf("\n");

        if (num == 5)
        {
            printf("EXITING ...");
            break;
        }

        switch (num)
        {
        case 1:
            printf(" VALUE MATRIX OF PRODUCTION\n\n");
            for (int i = 1; i <= 4; i++)
            {
                printf(" WEEK(%d)\t", i);
                for (int j = 1; j <= 5; j++)
                {
                    printf("%7d", Mval[i][j]);
                }
                printf("\n");
            }

            printf("\n VALUE MATRIX OF SALE\n\n");
            for (int i = 1; i <= 4; i++)
            {
                printf(" WEEK(%d)\t", i);
                for (int j = 1; j <= 5; j++)
                {
                    printf("%7d", Sval[i][j]);
                }
                printf("\n");
            }

            break;

        case 2:
            printf("TOTALLY WEEK PRODUCTION & SALES\n\n");
            printf("             PRODUCTION   SALES\n");
            printf("             -------      ---");
            for (int i = 1; i <= 4; i++)
            {
                printf(" WEEK(%d)\t", i);
                printf("%7d\t%7d\t\n", Mweek[i], Sweek[i]);
            }
            break;

        case 3:
            printf(" PRODUCT_WISE TOTAL PRODUCTION & SALES\n\n");
            printf("                    PRODUCTION   SALES\n");
            printf("                    -------      ---  \n");
            for (int i = 1; i <= 5; i++)
            {
                printf(" PRODUCT{%d)\t", i);
                printf("%7d\t%7d\n", Mprod[i], Sprod[i]);
            }
            break;

        case 4:
            printf(" GRAND TOTAL OF PRODUCTION & SALES\n");
            printf("\n TOTAL PROUCTION = %d\n", Mtotal);
            printf("\n TOTAL SALES = %d\n", Stotal);
            break;

        default:
            printf("WRONG CHOICE\n\n");
            break;
        }
    }
}
