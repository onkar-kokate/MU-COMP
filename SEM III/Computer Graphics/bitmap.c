#include <stdio.h>
#include <conio.h>
#include <graphics.h>
main()
{
    int gd, gm, i, j;

    int a[13][9] =
        {
            {0, 0, 0, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 1, 0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 1, 0, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
            {0, 1, 1, 1, 1, 1, 1, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 1, 0},
        };
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "c:\\tc\\bgi"); //Paste your BGI path here

    for (i = 0; i < 13; i++)
    {
        for (j = 0; j < 9; j++)
        {
            putpixel(200 + j, 200 + i, 15 * a[i][j]);
        }
    }
    getch();
    closegraph();
}
