#include <stdio.h>

int main()
{
    int M[5][6], S[5][6], C[5][6], Mval[5][6], Sval[5][6], Mweek[5], Sweek[5], Mprod[6], Sprod[6], Mtotal, Stotal, num;

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
    for (int i = 1; i <= 4; i++);
    {
        scanf("%d", &C[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            Mval[i][j] = M[i][j] * C[i];
            Sval[i][j] = S[i][j] * C[i];
        }
    }
    

    return 0;
}