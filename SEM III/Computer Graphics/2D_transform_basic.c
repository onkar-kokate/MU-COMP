#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int x1, y1, x2, y2;

void translation()
{
    int tx, ty, xn1, xn2, yn1, yn2;
    printf("\n Enter the translation (tx)(ty) :");
    scanf("%d%d", &tx, &ty);
    cleardevice();
    outtextxy(400, 100, "TRANSLATION");
    xn1 = x1 + tx;
    yn1 = y1 + ty;
    xn2 = x2 + tx;
    yn2 = y2 + ty;
    setbkcolor(WHITE);
    line(x1, y1, x2, y2);
    line(xn1, yn1, xn2, yn2);
    getch();
    setbkcolor(BLACK);
}

void scaling()
{
    int xn1, xn2, yn1, yn2;
    float sx, sy;
    printf("\nEnter the scaling factor (sx)(sy): ");
    scanf("%f%f", &sx, &sy);
    cleardevice();
    outtextxy(300, 200, "SCALING");
    xn1 = x1 * sx;
    yn1 = y1 * sy;
    xn2 = x2 * sx;
    yn2 = y2 * sy;
    setbkcolor(WHITE);
    line(x1, y1, x2, y2);
    line(xn1, yn1, xn2, yn2);
    getch();
    setbkcolor(BLACK);
}

void rotation()
{
    int r;
    float rx, xn1, xn2, yn1, yn2;
    printf("\nEnter the angle for rotation:");
    scanf("%d", &r);
    cleardevice();
    outtextxy(500, 200, "ROTATION");
    rx = (r * 3.14) / 180;
    xn1 = x1 * cos(rx) - y1 * sin(rx);
    yn1 = y1 * cos(rx) + x1 * sin(rx);
    xn2 = x2 * cos(rx) - y2 * sin(rx);
    yn2 = y2 * cos(rx) + x2 * sin(rx);
    setbkcolor(WHITE);
    line(x1, y1, x2, y2);
    line(xn1, yn1, xn2, yn2);
    getch();
    setbkcolor(BLACK);
}

void get()
{
    printf("\n Enter the coordinates x1,y1,x2,y2: ");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    outtextxy(200, 100, "ORIGINAL OBJECT");
    setbkcolor(WHITE);
    setcolor(RED);
    line(x1, y1, x2, y2);
    getch();
    setbkcolor(BLACK);
    getch();
}

void main()
{
    int gd = DETECT, gm, choice;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); //Paste your BGI path here
    cleardevice();
    get();
    do
    {
        cleardevice();
        printf("\n1)TRANSLATION ");
        printf("\n2)SCALING ");
        printf("\n3)ROTATION ");
        printf("\n4)EXIT ");
        scanf("\n%d", &choice);

        switch (choice)
        {
        case 1:
            translation();
            break;
        case 2:
            scaling();
            break;
        case 3:
            rotation();
            break;
        case 4:
            exit(0);
        }
    } while (choice < 4);
}
