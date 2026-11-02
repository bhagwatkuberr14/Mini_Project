#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void drawRobot(int x, int y)
{
    /* Robot Head */
    rectangle(x, y, x + 40, y + 30);

    /* Eyes */
    circle(x + 10, y + 10, 3);
    circle(x + 30, y + 10, 3);

    /* Body */
    rectangle(x + 5, y + 30, x + 35, y + 60);

    /* Legs */
    line(x + 10, y + 60, x + 10, y + 75);
    line(x + 30, y + 60, x + 30, y + 75);

    /* Arms */
    line(x + 5, y + 35, x - 10, y + 45);
    line(x + 35, y + 35, x + 50, y + 45);
}

void main()
{
    int gd = DETECT, gm;
    int x, y, i;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /* Draw Step Graph */
    line(50, 400, 150, 400);
    line(150, 400, 150, 350);
    line(150, 350, 250, 350);
    line(250, 350, 250, 300);
    line(250, 300, 350, 300);
    line(350, 300, 350, 250);
    line(350, 250, 450, 250);

    /* Robot Animation */
    for(i = 0; i < 4; i++)
    {
        x = 60 + i * 100;
        y = 340 - i * 50;

        cleardevice();

        /* Redraw Step Graph */
        line(50, 400, 150, 400);
        line(150, 400, 150, 350);
        line(150, 350, 250, 350);
        line(250, 350, 250, 300);
        line(250, 300, 350, 300);
        line(350, 300, 350, 250);
        line(350, 250, 450, 250);

        drawRobot(x, y);

        delay(1000);
    }

    getch();
    closegraph();
}