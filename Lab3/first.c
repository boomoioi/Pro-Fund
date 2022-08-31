#include <stdio.h>

int main()
{
    int num, temp;
    scanf("%d", &num);
    while (num >= 10)
    {
        temp = 0;
        while (num > 0)
        {
            temp += num % 10;
            num = num / 10;
        }
        num = temp;
    }
    printf("%d", num);
    return 0;
}
