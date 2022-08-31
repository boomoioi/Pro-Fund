#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        for (int j = 0; j < ((2 * num) - 1) - (i + 1) * 2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < (2 * num) - 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = num - 2; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        for (int j = 0; j < ((2 * num) - 1) - (i + 1) * 2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
