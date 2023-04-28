#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int x1, y1, x2, y2;

void drawline(int x1, int y1, int x2, int y2)
{
    int dx, dy, k = 0, x, y;

    dx = x2 - x1;
    dy = y2 - y1;

    x = x1;
    y = y1;

    k = 2 * dy - dx;

    while (x < x2)
    {
        if (k >= 0)
        {
            putpixel(x, y, RED);
            y = y + 1;
            k = k + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, RED);
            k = k + 2 * dy;
        }

        x = x + 1;
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); //Paste your BGI path here

    printf("Enter co-ordinates of first point (x1,y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter co-ordinates of second point (x2,y2): ");
    scanf("%d %d", &x2, &y2);

    setbkcolor(WHITE);
    drawline(x1, y1, x2, y2);

    getch();
    return 0;
}
