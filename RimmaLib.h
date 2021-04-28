#include "TXLib.h"

void DrawStars(int x, int y, int Miganie);
void DrawSun(int x, int y, COLORREF sunColor, int ylibka, int EyesL, int EyesR, int crazyL, int crazyR);
void DrawCloud(int x, int y, COLORREF CloudColor);
void DrawHouse(int x, int y, double sizeX, double sizeY,COLORREF krishaColor,COLORREF osnovaColor,
             COLORREF oknoColor, COLORREF zanaveckaColor, double zanavecka);
void DrawCar(int x, int y, double sizeX, double sizeY, double size, COLORREF nizColor,
             COLORREF verxColor, int kolecoL, int kolecoR);
void DrawElka(int x, int y, int veterL, int veterR);
void DrawPesochnicaGribok(int x, int y, double size);
void DrawGirl(int x, int y, double sizeX, double sizeY, double size, COLORREF teloColor, int legs, int EyesL, int EyesR);
void DrawBoy (int x, int y, int size, COLORREF maikaColor, int EyesL, int EyesR, int legs);
void DrawRains(int x, int y, int Miganie);

void DrawStars(int x, int y, int Miganie)
    {
    txSetColor (RGB (255, 255, 0), 1);
    txSetFillColor (RGB (255, 255, 0));
    txCircle (x, y, 3 - Miganie);
    }

void DrawRains(int x, int y, int Miganie)
    {
    txSetColor (RGB (128, 255, 255), 1);
    txSetFillColor (RGB (128, 255, 255));
    txCircle (x, y, 3 - Miganie);
    }


void DrawSun(int x, int y, COLORREF sunColor, int ylibka, int EyesL, int EyesR, int crazyL, int crazyR)
    {
    txSetColor (TX_ORANGE, 1);
    txSetFillColor (sunColor);
    txCircle (x, y, 50);

    txSetFillColor (TX_WHITE);
    txCircle (x - 20, y - crazyL, 10 - EyesL);

    txSetFillColor (TX_BLUE);
    txCircle (x - 20, y - crazyL, 5 - EyesL);

    txSetFillColor (TX_WHITE);
    txCircle (x + 20, y - crazyR, 10 - EyesR);

    txSetFillColor (TX_BLUE);
    txCircle (x + 20, y - crazyR, 5 - EyesR);

    txSetFillColor (RGB (0, 0, 0));
    txCircle (x, y, 5);

    txLine (x - 25, y + 20,     x     , y + ylibka);
    txLine (x     , y + ylibka, x + 25, y + 20);

    txLine (x + 40, y - 30, x + 50, y - 40);
    txLine (x + 50, y - 10, x + 70, y - 20);
    txLine (x + 50, y + 10, x + 80, y + 20);
    txLine (x + 40, y + 30, x + 60, y + 50);
    txLine (x + 25, y + 45, x + 40, y + 70);
    txLine (x     , y + 50, x     , y + 70);
    txLine (x - 25, y + 40, x - 40, y + 60);
    }

void DrawCloud(int x, int y, COLORREF CloudColor)
    {
    txSetColor (TX_WHITE, 3);
    txSetFillColor (CloudColor);
    txEllipse (x, y, x + 200, y + 50);
    }

void DrawHouse(int x, int y, double sizeX, double sizeY,COLORREF krishaColor,COLORREF osnovaColor,
               COLORREF oknoColor, COLORREF zanaveckaColor, double zanavecka)
    {
    txSetColor (TX_RED, 3);

    txSetFillColor (osnovaColor);
    POINT osnova[] = {{ROUND (x - 60*sizeX), ROUND (y +  70*sizeY)}, {ROUND (x - 60*sizeX), ROUND (y + 260*sizeY)},
                      {ROUND (x + 60*sizeX), ROUND (y + 260*sizeY)}, {ROUND (x + 60*sizeX), ROUND (y +  70*sizeY)}};
    txPolygon (osnova, 4);

    txSetFillColor (krishaColor);
    POINT krisha[] = {{ROUND (x - 60*sizeX), ROUND (y + 70*sizeY)}, {ROUND (x + 60*sizeX), ROUND (y + 70*sizeY)},
                      {ROUND (x), ROUND (y)}};
    txPolygon (krisha, 3);

    txSetFillColor (oknoColor);
    POINT okno[] = {{ROUND (x - 20*sizeX), ROUND (y + 150*sizeY)}, {ROUND (x - 20*sizeX), ROUND (y + 200*sizeY)},
                    {ROUND (x + 30*sizeX), ROUND (y + 200*sizeY)}, {ROUND (x + 30*sizeX), ROUND (y + 150*sizeY)}};
    txPolygon (okno, 4);

    txSetFillColor (zanaveckaColor);
    POINT zanaveckaL[] = {{ROUND (x - 20*sizeX),          ROUND (y + 150*sizeY)}, {ROUND (x +  2*sizeX), ROUND (y + 150*sizeY)},
                          {ROUND (x - zanavecka/2*sizeX), ROUND (y + 200*sizeY)}, {ROUND (x - 20*sizeX), ROUND (y + 200*sizeY)}};
    txPolygon (zanaveckaL, 4);

    txSetFillColor (zanaveckaColor);
    POINT zanaveckaR[] = {{ROUND (x + 30*sizeX),          ROUND (y + 150*sizeY)}, {ROUND (x +  5*sizeX), ROUND (y + 150*sizeY)},
                          {ROUND (x + zanavecka/2*sizeX), ROUND (y + 200*sizeY)}, {ROUND (x + 30*sizeX), ROUND (y + 200*sizeY)}};
    txPolygon (zanaveckaR, 4);
    }

void DrawCar(int x, int y, double sizeX, double sizeY, double size, COLORREF nizColor,
             COLORREF verxColor, int kolecoL, int kolecoR)
    {
    txSetColor (TX_BROWN, 5);

    txSetFillColor (nizColor);
    POINT niz[] = {{ROUND (x -  80*sizeX), ROUND (y - 50*sizeY)}, {ROUND (x -  80*sizeX), ROUND (y - 10*sizeY)},
                   {ROUND (x + 150*sizeX), ROUND (y - 10*sizeY)}, {ROUND (x + 150*sizeX), ROUND (y - 50*sizeY)}};
    txPolygon (niz, 4);

    txSetFillColor (verxColor);
    POINT verx[] = {{ROUND (x - 30*sizeX), ROUND (y -  50*sizeY)}, {ROUND (x),             ROUND (y - 100*sizeY)},
                    {ROUND (x + 70*sizeX), ROUND (y - 100*sizeY)}, {ROUND (x + 100*sizeX), ROUND (y -  50*sizeY)}};
    txPolygon (verx, 4);

    txSetFillColor (RGB (0, 0, 0));
    txCircle (x - kolecoL*sizeX, y + 5*sizeY, 15*size);

    txSetFillColor (RGB (0, 0, 0));
    txCircle (x + kolecoR*sizeX, y + 5*sizeY, 15*size);
    }

void DrawElka(int x, int y, int veterL, int veterR)
    {
    txSetColor (TX_GREEN, 5);
    txSetFillColor (RGB (0, 202, 0));
    POINT verx[] = {{x - veterL, y}, {x - 40, y + 60}, {x + 40, y + 60}};
    txPolygon (verx,3);

    txSetFillColor (RGB (0, 202, 0));
    POINT niz[] = {{x + veterR, y + 60}, {x - 40, y + 130}, {x + 40, y + 130}};
    txPolygon (niz,3);

    txSetFillColor (RGB (119, 60, 0));
    POINT pen[] = {{x - 30, y + 130}, {x - 30, y + 160}, {x + 30, y + 160}, {x + 30, y + 130}};
    txPolygon (pen,4);
    }

void DrawPesochnicaGribok(int x, int y, double size)
    {
    txSetColor (TX_RED, 5);

    txSetFillColor (RGB (255, 128, 0));
    POINT d[] = {{ROUND(x - 125*size), ROUND(y + 280*size)}, {ROUND(x - 125*size), ROUND(y + 250*size)},
                 {ROUND(x +  25*size), ROUND(y + 280*size)}, {ROUND(x +  25*size), ROUND(y + 310*size)}};
    txPolygon (d, 4);

    txSetFillColor (RGB (255, 128, 0));
    POINT k[] = {{ROUND(x +  25*size), ROUND(y + 280*size)}, {ROUND(x + 105*size), ROUND(y + 180*size)},
                 {ROUND(x + 105*size), ROUND(y + 210*size)}, {ROUND(x +  25*size), ROUND(y + 310*size)}};
    txPolygon (k, 4);

    txSetFillColor (RGB (255, 128, 0));
    POINT f[] = {{ROUND(x - 125*size), ROUND(y + 250*size)}, {ROUND(x - 35*size), ROUND(y + 160*size)},
                 {ROUND(x -  35*size), ROUND(y + 190*size)}, {ROUND(x - 95*size), ROUND(y + 260*size)}};
    txPolygon (f, 4);

    txSetFillColor (RGB (255, 128, 0));
    POINT g[] = {{ROUND(x - 35*size), ROUND(y + 160*size)}, {ROUND(x + 105*size), ROUND(y + 180*size)},
                 {ROUND(x + 85*size), ROUND(y + 210*size)}, {ROUND(x -  35*size), ROUND(y + 190*size)}};
    txPolygon (g, 4);

    txSetFillColor (RGB (255, 255, 0));
    POINT c[] = {{ROUND(x - 95*size), ROUND(y + 260*size)}, {ROUND(x - 35*size), ROUND(y + 190*size)},
                 {ROUND(x + 85*size), ROUND(y + 210*size)}, {ROUND(x + 25*size), ROUND(y + 280*size)}};
    txPolygon (c, 4);

    txSetFillColor (RGB (255, 0, 128));
    POINT a[] = {{ROUND(x - 115*size), ROUND(y + 80*size)}, {x, y},
                 {ROUND(x + 115*size), ROUND(y + 80*size)}};
    txPolygon (a, 3);

    txSetFillColor (RGB (128, 64, 0));
    POINT b[] = {{ROUND(x - 15*size), ROUND(y + 230*size)}, {ROUND(x + 15*size), ROUND(y + 230*size)},
                 {ROUND(x + 15*size), ROUND(y +  80*size)}, {ROUND(x - 15*size), ROUND(y +  80*size)}};
    txPolygon (b, 4);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x,           y + 30*size, 10*size);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x - 30*size, y + 40*size, 10*size);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x + 30*size, y + 40*size, 10*size);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x - 55*size, y + 60*size, 10*size);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x + 55*size, y + 60*size, 10*size);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x + 15*size, y + 55*size, 10*size);

    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle (x - 15*size, y + 55*size, 10*size);
    }

void DrawGirl(int x, int y, double sizeX, double sizeY, double size, COLORREF teloColor, int legs, int EyesL, int EyesR)
    {
    txSetColor (RGB (255, 0, 128), 1);

    txSetFillColor (RGB (255, 206, 255));
    txCircle (x*sizeX, y - 30*sizeY, 30*size);

    txSetFillColor (TX_WHITE);
    txCircle (x - 10*sizeX, y - 45*sizeY, 5 - EyesL);

    txSetFillColor (RGB (0, 255, 255));
    txCircle (x - 10*sizeX, y - 45*sizeY, 2 - EyesL);

    txSetFillColor (TX_WHITE);
    txCircle (x + 10*sizeX, y - 45*sizeY, 5 - EyesR);

    txSetFillColor (RGB (0, 255, 255));
    txCircle (x + 10*sizeX, y - 45*sizeY, 2 - EyesR);

    txSetFillColor (RGB (0, 0, 0));
    txCircle (x*sizeX, y - 30*sizeY, 3);

    txSetFillColor (RGB (255, 0, 0));
    POINT gubi [] = {{ROUND (x - 15*sizeX), ROUND (y - 20*sizeY)}, {ROUND (x + 15*sizeX), ROUND (y - 20*sizeY)},
                     {ROUND (x*sizeX),      ROUND (y - 15*sizeY)}};
    txPolygon (gubi, 3);

    txSetFillColor (teloColor);
    POINT telo [] = {{ROUND (x - 30*sizeX), ROUND (y + 50*sizeY)}, {ROUND (x + 20*sizeX), ROUND (y + 50*sizeY)},
                     {ROUND (x*sizeX),      ROUND (y*sizeY)}};
    txPolygon (telo, 3);

    txLine (x - 10*sizeX, y + 50*sizeY, x - legs/2*sizeX, y + 70*sizeY);
    txLine (x + 10*sizeX, y + 50*sizeY, x + legs/2*sizeX, y + 70*sizeY);

    txLine (x*sizeX, y*sizeY, x - 40*sizeX, y + 10*sizeY);
    txLine (x*sizeX, y*sizeY, x + 40*sizeX, y + 10*sizeY);
    }

void DrawBoy(int x, int y, int size, COLORREF maikaColor, int EyesL, int EyesR, int legs)
    {
    txSetColor (TX_BLUE, 1);

    txSetFillColor (RGB (255, 206, 255));
    txCircle (x + (805-810)*size, y + (370-400)*size, 30*size);

    txSetFillColor (TX_WHITE);
    txCircle (x - 10*size, y - 45*size, 5 - EyesL);

    txSetFillColor (RGB (0, 255, 255));
    txCircle (x - 10*size, y - 45*size, 2 - EyesL);

    txSetFillColor (TX_WHITE);
    txCircle (x + 10*size, y - 45*size, 5 - EyesR);

    txSetFillColor (RGB (0, 255, 255));
    txCircle (x + 10*size, y - 45*size, 2 - EyesR);

    txSetFillColor (RGB (0, 0, 0));
    txCircle (x*size, y - 30*size, 3);

    txSetFillColor (RGB (255, 0, 0));
    POINT gubi [] = {{ROUND (x - 15*size), ROUND (y - 20*size)}, {ROUND (x + 15*size), ROUND (y - 20*size)},
                     {ROUND (x*size),      ROUND (y - 15*size)}};
    txPolygon (gubi, 3);

    txSetFillColor (maikaColor);
    POINT maika [] = {{ROUND (x - 40*size), ROUND (y*size)},      {ROUND (x - 40*size), ROUND (y + 70*size)},
                      {ROUND (x + 30*size), ROUND (y + 70*size)}, {ROUND (x + 30*size), ROUND (y*size)}};
    txPolygon (maika, 4);

    txSetFillColor (RGB (128, 0, 128));
    POINT shortiL [] = {{ROUND (x - 40*size), ROUND (y + 50*size)}, {ROUND (x - 40*size), ROUND (y + 70*size)},
                        {ROUND (x -  5*size), ROUND (y + 70*size)}, {ROUND (x -  5*size), ROUND (y + 50*size)}};
    txPolygon (shortiL, 4);

    txSetFillColor (RGB (128, 0, 128));
    POINT shortiR [] = {{ROUND (x -  5*size), ROUND (y + 50*size)}, {ROUND (x -  5*size), ROUND (y + 70*size)},
                        {ROUND (x + 30*size), ROUND (y + 70*size)}, {ROUND (x + 30*size), ROUND (y + 50*size)}};
    txPolygon (shortiR, 4);

    txLine (x - 40*size, y*size, x - 70*size, y + 30*size);
    txLine (x + 30*size, y*size, x + 70*size, y + 30*size);

    txLine (x - legs/2*size, y + 100*size, x - 23*size, y + 70*size);
    txLine (x + legs/2*size, y + 100*size, x + 13*size, y + 70*size);
    }

