#include <stdio.h>

int main()
{
    int i, len = 0;
    char str[] = "REMOVE THE SPACES";

    len = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }
    }

    printf("AFTER REMOVING SPACE : %s", str);
    return 0;
}