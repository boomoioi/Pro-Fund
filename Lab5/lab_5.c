#include <stdio.h>
#include <windows.h>
#include <conio.h>
void draw_ship(int, int);
void erase_ship(int, int);

int main()
{
    char ch = ' ';
    int x = 0, y = 20;
    draw_ship(x, y);
    for (int i = 0; i < 75; i++)
    {
        erase_ship(x, y);
        draw_ship(++x, y);
        Sleep(50);
    }
    do
    {
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 'a' && x != 0)
            {
                erase_ship(x, y);
                draw_ship(--x, y);
            }
            if (ch == 'd' && x != 75)
            {
                erase_ship(x, y);
                draw_ship(++x, y);
            }
            if (ch == 'w' && y != 0)
            {
                erase_ship(x, y);
                draw_ship(x, --y);
            }
            if (ch == 's')
            {
                erase_ship(x, y);
                draw_ship(x, ++y);
            }

            fflush(stdin);
        }
        Sleep(50);
    } while (ch != 'x');
    return 0;
}

void draw_ship(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("<-0->");
}

void erase_ship(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("     ");
}
