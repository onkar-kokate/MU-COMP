#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int sign(float dx);

int sign(float dx)
{
    if (dx < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

void main()
{
    int gd = DETECT, gm, i;
    float x, y, dx, dy, steps;
    int x1, x2, y1, y2;
    printf("\nEnter Values of x1: ");
    scanf("%d", &x1);

    printf("\nEnter Values of y1: ");
    scanf("%d", &y1);

    printf("\nEnter Values of x2: ");
    scanf("%d", &x2);

    printf("\nEnter Values of y2: ");
    scanf("%d", &y2);

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); //Paste your BGI path here

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    if (dx >= dy)
    {
        steps = dx;
    }
    else
    {
        steps = dy;
    }

    dx = (x2 - x1) / steps;
    dy = (y2 - y1) / steps;

    x = x1 + 0.5 * sign(dx);
    y = y1 + 0.5 * sign(dy);
    i = 1;

    while (i <= steps)
    {
        putpixel(x, y, RED);
        x += dx;
        y += dy;
        i = i + 1;
    }
    getch();
    closegraph();
}
