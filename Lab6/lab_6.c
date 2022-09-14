#include <stdio.h>
#include <windows.h>
void draw_ship(int, int);
void erase_ship(int, int);
void setcursor(boolean);
void setcolor(int, int);
int _kbhit();
int _getch();

int main()
{
    char ch = ' ';
    setcursor(0);
    int x = 0, y = 20;
    draw_ship(x, y);
    for (x = 1; x <= 73; x++)
    {
        draw_ship(x, y);
        Sleep(50);
    }
    do
    {
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 'a' && x != 0)
            {

                draw_ship(--x, y);
            }
            if (ch == 'd' && x != 73)
            {
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
    printf(" <-0-> ");
}

void erase_ship(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("       ");
}

void setcursor(boolean visible)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = 20;
    SetConsoleCursorInfo(console, &lpCursor);
}

void setcolor(int fg, int bg)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}