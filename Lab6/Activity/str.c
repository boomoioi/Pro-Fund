#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], *p;
    p = s;

    scanf("%s", s);
    while (*p != '\0')
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            printf("%c", *p+32);
        }
        else if (*p >= 'a' && *p <= 'z')
        {
            printf("%c", *p-32);
        }
        p++;
    }
    return 0;
}