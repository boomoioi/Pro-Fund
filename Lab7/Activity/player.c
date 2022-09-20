#include <string.h>
#include <stdio.h>

int main()
{
    int i;
    struct player
    {
        char name[50];
        int level;
        int score;
    };
    struct player playerList[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%s %d %d", playerList[i].name, &playerList[i].level, &playerList[i].score);
    }

    FILE *fp;
    fp = fopen("mytestfile.txt", "w");
    for (i = 0; i < 5; i++)
    {
        fprintf(fp, "%s %d %d\n", playerList[i].name, playerList[i].level, playerList[i].score);
    }
    fclose(fp);
    return 0;
}