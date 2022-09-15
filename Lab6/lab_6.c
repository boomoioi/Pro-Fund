#include <stdio.h>
#include <windows.h>
#include <conio.h>
void draw_bullet(int, int);
void draw_ship(int, int);
void erase_bullet(int, int);
void erase_ship(int, int);
void setcursor(boolean);
void setcolor(int, int);

int main()
{
    char ch = ' ';
    setcursor(0);
    setcolor(2, 4);
    int x = 40, y = 20;
    int shoot = 0, bullet = 5, sx, sy;
    int moveLeft = 0, moveRight = 0;
    draw_ship(x, y);
    do
    {
        if (_kbhit())
        {
            ch = _getch();
            if (ch == 'a' && x != 0)
            {
                moveLeft = 1;
                moveRight = 0;
            }
            if (ch == 'd' && x != 76)
            {
                moveLeft = 0;
                moveRight = 1;
            }
            if (ch == 's')
            {
                moveLeft = 0;
                moveRight = 0;
            }
            if (ch == ' ' && bullet != 0 && shoot == 0)
            {
                shoot = 1;
                sy = y - 1;
                sx = x + 2;
                bullet--;
                draw_bullet(sx, sy);
            }

            fflush(stdin);
        }
        if (moveLeft == 1 && x != 0)
        {
            setcolor(0, 0);
            erase_ship(x, y);
            setcolor(2, 4);
            draw_ship(--x, y);
        }
        if (moveRight == 1 && x != 76)
        {
            setcolor(0, 0);
            erase_ship(x, y);
            setcolor(2, 4);
            draw_ship(++x, y);
        }
        if (shoot == 1)
        {
            setcolor(0, 0);
            erase_bullet(sx, sy);
            if (sy == 0)
            {
                shoot = 0;
            }
            else
            {
                setcolor(7, 0);
                draw_bullet(sx, --sy);
            }
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

void draw_bullet(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf(".");
}

void erase_ship(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("     ");
}

void erase_bullet(int x, int y)
{
    COORD c = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf(" ");
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