#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", &s);
    int length = strlen(s), loop = 0, i = 0;
    // printf("s=%s length=%d loop=%d i=%d", s, length, loop, i);
    while (i < length)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            loop = loop * 10 + (s[i] - '0');
            // printf("%d,", loop);
        }
        else
        {
            // printf("%c,", s[i]);
            if (loop > 0)
            {
                for (int j = 0; j < loop; j++)
                {
                    // printf("%c", s[i]);
                }
                loop = 0;
            }
            else if (loop == 0 && s[i - 1] == '0')
            {
                // printf("%c,", s[i-1]);
            }
            else
            {
                // printf("%c", s[i]);
            }
        }
        i++;
        printf("%d,", i);
    }
    return 0;
}