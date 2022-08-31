#include <stdio.h>

int main()
{
    int x = 2, temp;
    while (x <= 10000)
    {
        temp = 1;
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                temp += i;
            }
        }
        if (temp == x)
        {
            printf("%d\n", x);
        }

        x++;
    }
    return 0;
}
