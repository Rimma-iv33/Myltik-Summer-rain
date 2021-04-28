//{===========================================================================
//! @file       MartinovaRimma Myltik.cpp
//!
//! @brief      Myltik "Summer rain".
//!
//! @Date       April 2021
//!
//! @author     Martinova Rimma
//          (C) Martinova Rimma, Ivanovo, 2021
//}===========================================================================

#include "TXLib.h"

void DrawSky(COLORREF SkyColor);
void DrawGround(COLORREF GroundColor);
void DrawRoad();
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
void DrawBackground();
void DrawMorning();
void DrawPeople();
void DrawRain();
void DrawWalk();
void DrawEvening();
void DrawNight();
void StartTitles();
void FinishTitles();

int main()
    {
    txCreateWindow (1500, 800);
    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 1500, 800);

    txPlaySound ("music.WAV");

    StartTitles();
    DrawBackground();
    DrawMorning();
    DrawPeople();
    DrawRain();
    DrawWalk();
    DrawEvening();
    DrawNight();
    FinishTitles();

    return 0;
    }

void DrawBackground()
    {
    DrawSky(RGB (0, 255, 255));
    DrawGround(RGB (0, 255, 0));
    DrawRoad();
    DrawPesochnicaGribok( 525, 120, 0.5);
    DrawPesochnicaGribok(1085, 120, 0.5);
    DrawHouse( 120, 180, 1, 1.5, RGB ( 129, 81,  54), RGB ( 63,  72, 204), RGB (216, 220,  44), TX_ORANGE, 50);
    DrawHouse(1370, 180, 2, 1,   RGB (237,  92, 204), RGB (216, 220,  44), RGB ( 47, 225,  32), TX_ORANGE, 50);
    }

void StartTitles()
    {
    txBegin();

    int t = 0;

    while (t <= 75)
        {
        DrawSky(RGB (0, 255, 255));
        DrawGround(RGB (0, 255, 0));
        DrawRoad();

        txSetColor (RGB (128, 0, 128));
        txSelectFont ("Arial", 200);

        txTextOut (-300 + t * 10, 100, "Summer");
        txTextOut (1600 - t * 10, 250, "rain");

        txSleep (100);
        t++;
        }

    txEnd();
    }

void FinishTitles()
    {
    txBegin();

    int t = 0;

    while (t <= 90)
        {
        DrawSky(RGB (0, 0, 128));
        DrawGround(RGB (0, 64, 0));
        DrawRoad();

        txSetColor (TX_WHITE);
        txSelectFont ("Arial", 50);
        txTextOut (550, 225, "Martinova Rimma");
        txTextOut (625, 275, "Ivanovo");
        txTextOut (645, 325, "2021");

        txSleep (100);
        t++;
        }

    txEnd();
    }

void DrawMorning()
    {
    txBegin();

    int t = 0;

    while (t <= 400)
        {
        DrawBackground();

        DrawSun(50 + 2*t, 50, RGB (255, 255, 0), 36, (t/4)%2, (t/4)%2, 21, 21);

        DrawCloud( 250 + ((t/4)%2) * 20, 40, TX_WHITE);
        DrawCloud( 750 + ((t/4)%2) * 20, 50, TX_WHITE);
        DrawCloud(1250 + ((t/4)%2) * 20, 40, TX_WHITE);

        DrawHouse( 120, 180, 1, 1.5, RGB ( 129, 81,  54), RGB ( 63,  72, 204), RGB (216, 220,  44), TX_ORANGE, 1 + t*0.09);
        DrawHouse(1370, 180, 2, 1,   RGB (237,  92, 204), RGB (216, 220,  44), RGB ( 47, 225,  32), TX_ORANGE, 1 + t*0.1);

        DrawCar( 120 + 2*t, 650, 1.2,           0.5 + (t/10)%2, 1.3,
                TX_PINK,             TX_ORANGE,         -5,  60);

        DrawCar( 520 + 2*t, 670, 1 + (t/6)%2,   1,              1,
                RGB (255,   0,   0), RGB (255 ,255, 0), -5,  60);

        DrawCar(1300 - 2*t, 760, 1,             1.5 + (t/10)%2, 1.5,
                TX_YELLOW,           TX_RED,            40, 110);

        DrawCar( 900 - 2*t, 750, 1 + (t/7)%2,   1,              1,
                RGB (185, 255, 255), RGB (  0, 0, 213), 20,  90);

        DrawElka( 780, 180, 0, 0);
        DrawElka( 320, 200, 0, 0);
        DrawElka(1350, 400, 0, 0);

        txSleep (5);
        t++;
        }

    txEnd();
    }

void DrawPeople()
    {
    txBegin();

    int t = 0;

    while (t <= 150)
        {
        DrawBackground();

        DrawCar( 520, 760, 1,   1.5, 1.5, TX_YELLOW,           TX_RED,            (t/4)%2 + 40, (t/4)%2 + 110);
        DrawCar( 120, 750, 1,   1,   1,   RGB (185, 255, 255), RGB (  0, 0, 213), (t/4)%2 + 20, (t/4)%2 +  90);
        DrawCar( 900, 650, 1.2, 0.5, 1.3, TX_PINK,             TX_ORANGE,         (t/4)%2 - 20, (t/4)%2 +  60);
        DrawCar(1300, 670, 1,   1,   1,   RGB (255,   0,   0), RGB (255 ,255, 0), (t/4)%2 - 20, (t/4)%2 +  60);

        DrawGirl( 650 + 1*t, 650 - 1*t, 1, 1, 1, RGB (255, 152,  49), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl( 300 + 1*t, 650 - 1*t, 1, 1, 1, RGB (237,  92, 204), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl(1160 - 1*t, 530 - 1*t, 1, 1, 1, RGB (216, 220,  44), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl(1500 - 1*t, 530 - 1*t, 1, 1, 1, RGB ( 64,   0,  64), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);

        DrawBoy( 400 + 1*t, 650 - 1*t, 1, RGB (255,   0,  0), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 150 + 1*t, 650 - 1*t, 1, TX_RED,             (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 910 - 1*t, 530 - 1*t, 1, TX_PINK,            (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy(1350 - 1*t, 530 - 1*t, 1, RGB (255, 152, 49), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);

        DrawSun(850, 50, RGB (255, 255, 0), 36, 1, 1, (t/4)%2 + 21, -(t/4)%2 + 21);

        DrawCloud( 250 + ((t/4)%2) * 20, 40, TX_WHITE);
        DrawCloud( 750 + ((t/4)%2) * 20, 50, TX_WHITE);
        DrawCloud(1250 + ((t/4)%2) * 20, 40, TX_WHITE);

        DrawElka( 780, 180, 0, 0);
        DrawElka( 320, 200, 0, 0);
        DrawElka(1350, 400, 0, 0);

        txSleep (7);
        t++;
        }

    txEnd();
    }

void DrawRain()
    {
    txBegin();

    int t = 0;

    while (t <= 400)
        {
        DrawSky(RGB (0, 255 - t/3, 255 - t/6));
        DrawGround(RGB (0, 255, 0));
        DrawRoad();
        DrawPesochnicaGribok( 525, 120, 0.5 + (t/3)*0.005);
        DrawPesochnicaGribok(1085, 120, 0.5 + (t/3)*0.005);
        DrawHouse( 120, 180, 1, 1.5, RGB ( 129, 81,  54), RGB ( 63,  72, 204), RGB (216, 220,  44), TX_ORANGE, 50);
        DrawHouse(1370, 180, 2, 1,   RGB (237,  92, 204), RGB (216, 220,  44), RGB ( 47, 225,  32), TX_ORANGE, 50);

        DrawSun(850, 50, RGB (255, 255, 0), 36, 1, 1, (t/4)%2 + 21, -(t/4)%2 + 21);

        DrawRains(  50,  50 + t/2, (t/4)%2); DrawRains( 125, 180 + t/2, (t/4)%2);
        DrawRains( 200, 100 + t/2, (t/4)%2); DrawRains( 275, 100 + t/2, (t/4)%2);
        DrawRains( 350, 150 + t/2, (t/4)%2); DrawRains( 425,  50 + t/2, (t/4)%2);
        DrawRains( 500, 125 + t/2, (t/4)%2); DrawRains( 575, 120 + t/2, (t/4)%2);
        DrawRains( 650,  75 + t/2, (t/4)%2); DrawRains(1100,  70 + t/2, (t/4)%2);
        DrawRains( 725, 175 + t/2, (t/4)%2); DrawRains(1175,  25 + t/2, (t/4)%2);
        DrawRains( 800,  30 + t/2, (t/4)%2); DrawRains(1225, 180 + t/2, (t/4)%2);
        DrawRains( 875, 150 + t/2, (t/4)%2); DrawRains(1300, 130 + t/2, (t/4)%2);
        DrawRains( 950,  75 + t/2, (t/4)%2); DrawRains(1375,  50 + t/2, (t/4)%2);
        DrawRains(1025,  25 + t/2, (t/4)%2); DrawRains(1425, 100 + t/2, (t/4)%2);

        DrawCar( 520 - 4*t, 760, 1,   1.5, 1.5, TX_YELLOW,           TX_RED,            (t/4)%2 + 40, (t/4)%2 + 110);
        DrawCar( 120 - 2*t, 750, 1,   1,   1,   RGB (185, 255, 255), RGB (  0, 0, 213), (t/4)%2 + 20, (t/4)%2 +  90);
        DrawCar( 900 + 5*t, 650, 1.2, 0.5, 1.3, TX_PINK,             TX_ORANGE,         (t/4)%2 - 20, (t/4)%2 +  60);
        DrawCar(1300 + 2*t, 670, 1,   1,   1,   RGB (255,   0,   0), RGB (255 ,255, 0), (t/4)%2 - 20, (t/4)%2 +  60);

        DrawCloud( 250 + 1*t, 40, RGB (255 - t/4, 255 - t/4, 255 - t/4));
        DrawCloud( 750,       50, RGB (255 - t/3, 255 - t/3, 255 - t/3));
        DrawCloud(1250 - 1*t, 40, RGB (255 - t/5, 255 - t/5, 255 - t/5));

        DrawElka( 780, 180, ((t/4)%2) * 20, ((t/4)%2) * 20);
        DrawElka( 320, 200, ((t/4)%2) * 20, ((t/4)%2) * 20);
        DrawElka(1350, 400, ((t/4)%2) * 20, ((t/4)%2) * 20);

        DrawGirl( 350 + t/2, 500 - t/2, 1, 1, 1, RGB (255, 152,  49), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl( 575,       500 - t/2, 1, 1, 1, RGB (237,  92, 204), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl( 800 + t/1, 400 - t/6, 1, 1, 1, RGB (216, 220,  44), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl(1180 - t/4, 400 - t/6, 1, 1, 1, RGB ( 64,   0,  64), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);

        DrawBoy( 300 + t/2, 500 - t/2, 1, RGB (255,   0,  0), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 525,       500 - t/2, 1, TX_RED,             (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 750 + t/1, 400 - t/6, 1, TX_PINK,            (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy(1130 - t/4, 400 - t/6, 1, RGB (255, 152, 49), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);

        txSleep (9);
        t++;
        }

    txEnd();
    }

void DrawWalk()
    {
    txBegin();

    int t = 0;

    while (t <= 100)
        {
        DrawBackground();

        DrawSun(850, 50, RGB (255, 255, 0), 36, 1, 1, (t/4)%2 + 21, -(t/4)%2 + 21);

        DrawCar(-520 + t*40, 760, 1,   1.5, 1.5, TX_YELLOW,           TX_RED,            (t/4)%2 + 40, (t/4)%2 + 110);
        DrawCar(-120 + t*20, 750, 1,   1,   1,   RGB (185, 255, 255), RGB (  0, 0, 213), (t/4)%2 + 20, (t/4)%2 +  90);
        DrawCar(2000 - t*50, 650, 1.2, 0.5, 1.3, TX_PINK,             TX_ORANGE,         (t/4)%2 - 20, (t/4)%2 +  60);
        DrawCar(1800 - t*20, 670, 1,   1,   1,   RGB (255,   0,   0), RGB (255 ,255, 0), (t/4)%2 - 20, (t/4)%2 +  60);

        DrawCloud( 250 + ((t/4)%2) * 20, 40, TX_WHITE);
        DrawCloud( 750 + ((t/4)%2) * 20, 50, TX_WHITE);
        DrawCloud(1250 + ((t/4)%2) * 20, 40, TX_WHITE);

        DrawElka( 780, 180, 0, 0);
        DrawElka( 320, 200, 0, 0);
        DrawElka(1350, 400, 0, 0);

        DrawGirl( 330 + t,   500,     1, 1, 1, RGB (255, 152,  49), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl( 555 + t,   500 - t, 1, 1, 1, RGB (237,  92, 204), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl( 770 + t/2, 400 - t, 1, 1, 1, RGB (216, 220,  44), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl(1160 - t/4, 400,     1, 1, 1, RGB ( 64,   0,  64), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);

        DrawBoy( 300 + t,   500,     1, RGB (255,   0,  0), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 525 + t,   500 - t, 1, TX_RED,             (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 750 + t/2, 400 - t, 1, TX_PINK,            (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy(1130 - t/4, 400,     1, RGB (255, 152, 49), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);

        txSleep (100);
        t++;
        }

    txEnd();
    }

void DrawEvening()
    {
    txBegin();

    int t = 0;

    while (t <= 200)
        {
        DrawBackground();

        DrawSun(850 + 3*t, 50, RGB (255, 255, 0), 36, (t/4)%2, (t/4)%2, 21, 21);

        DrawCloud( 250 + ((t/4)%2) * 20, 40, TX_WHITE);
        DrawCloud( 750 + ((t/4)%2) * 20, 50, TX_WHITE);
        DrawCloud(1250 + ((t/4)%2) * 20, 40, TX_WHITE);

        DrawElka( 780, 180, 0, 0);
        DrawElka( 320, 200, 0, 0);
        DrawElka(1350, 400, 0, 0);

        DrawCar( 520, 760, 1,   1.5, 1.5, TX_YELLOW,           TX_RED,            (t/4)%2 + 40, (t/4)%2 + 110);
        DrawCar( 120, 750, 1,   1,   1,   RGB (185, 255, 255), RGB (  0, 0, 213), (t/4)%2 + 20, (t/4)%2 +  90);
        DrawCar( 900, 650, 1.2, 0.5, 1.3, TX_PINK,             TX_ORANGE,         (t/4)%2 - 20, (t/4)%2 +  60);
        DrawCar(1300, 670, 1,   1,   1,   RGB (255,   0,   0), RGB (255 ,255, 0), (t/4)%2 - 20, (t/4)%2 +  60);

        DrawGirl( 330 - t/2, 500 + t/2, 1, 1, 1, RGB (255, 152,  49), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl( 555 - t/2, 500 + t/2, 1, 1, 1, RGB (237,  92, 204), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl( 780 + t/2, 400 + t/2, 1, 1, 1, RGB (216, 220,  44), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);
        DrawGirl(1160 + t/2, 400 + t/2, 1, 1, 1, RGB ( 64,   0,  64), ((t/4)%2) * 20 + 10, (t/4)%2, (t/4)%2);

        DrawBoy( 300 - t/2, 500 + t/2, 1, RGB (255,   0,  0), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 525 - t/2, 500 + t/2, 1, TX_RED,             (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy( 750 + t/2, 400 + t/2, 1, TX_PINK,            (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);
        DrawBoy(1130 + t/2, 400 + t/2, 1, RGB (255, 152, 49), (t/4)%2, (t/4)%2, ((t/4)%2) * 20 + 10);

        txSleep (9);
        t++;
        }

    txEnd();
    }

void DrawNight()
    {
    txBegin();

    int t = 0;

    while (t <= 200)
        {
        DrawSky(RGB (0, 0, 128));
        DrawGround(RGB (0, 64, 0));
        DrawRoad();
        DrawPesochnicaGribok( 525, 120, 1);
        DrawPesochnicaGribok(1085, 120, 1);

        DrawHouse( 120, 180, 1, 1.5, RGB ( 129, 81,  54), RGB ( 63,  72, 204), RGB (216, 220,  44), TX_ORANGE, 50 - t*0.3);
        DrawHouse(1370, 180, 2, 1,   RGB (237,  92, 204), RGB (216, 220,  44), RGB ( 47, 225,  32), TX_ORANGE, 50 - t*0.3);

        DrawElka( 780, 180, 0, 0);
        DrawElka( 320, 200, 0, 0);
        DrawElka(1350, 400, 0, 0);

        DrawCar( 520 - 4*t, 760, 1,   1.5, 1.5, TX_YELLOW,           TX_RED,            (t/4)%2 + 40, (t/4)%2 + 110);
        DrawCar( 120 - 2*t, 750, 1,   1,   1,   RGB (185, 255, 255), RGB (  0, 0, 213), (t/4)%2 + 20, (t/4)%2 +  90);
        DrawCar( 900 + 5*t, 650, 1.2, 0.5, 1.3, TX_PINK,             TX_ORANGE,         (t/4)%2 - 20, (t/4)%2 +  60);
        DrawCar(1300 + 2*t, 670, 1,   1,   1,   RGB (255,   0,   0), RGB (255 ,255, 0), (t/4)%2 - 20, (t/4)%2 +  60);

        DrawStars(  50,  50, (t/4)%2); DrawStars( 125, 180, (t/4)%2);
        DrawStars( 200, 100, (t/4)%2); DrawStars( 275, 100, (t/4)%2);
        DrawStars( 350, 150, (t/4)%2); DrawStars( 425,  50, (t/4)%2);
        DrawStars( 500, 125, (t/4)%2); DrawStars( 575, 120, (t/4)%2);
        DrawStars( 650,  75, (t/4)%2); DrawStars(1100,  70, (t/4)%2);
        DrawStars( 725, 175, (t/4)%2); DrawStars(1175,  25, (t/4)%2);
        DrawStars( 800,  30, (t/4)%2); DrawStars(1225, 180, (t/4)%2);
        DrawStars( 875, 150, (t/4)%2); DrawStars(1300, 130, (t/4)%2);
        DrawStars( 950,  75, (t/4)%2); DrawStars(1375,  50, (t/4)%2);
        DrawStars(1025,  25, (t/4)%2); DrawStars(1425, 100, (t/4)%2);

        txSleep (9);
        t++;
        }

    txEnd();
    }

void DrawSky(COLORREF SkyColor)
    {
    txSetColor (RGB (0, 255, 255), 5);
    txSetFillColor (SkyColor);
    POINT Sky[] = {{0, 0}, {1500, 0}, {1500, 200}, {0, 200}};
    txPolygon (Sky, 4);
    }

void DrawGround(COLORREF GroundColor)
    {
    txSetColor (RGB (0, 255, 0), 5);
    txSetFillColor (GroundColor);
    POINT Ground[] = {{0, 200}, {1500, 200}, {1500, 600}, {0, 600}};
    txPolygon (Ground, 4);
    }

void DrawRoad()
    {
    txSetColor (RGB (128, 128, 128), 5);
    txSetFillColor (RGB (128, 128, 128));
    POINT Road[] = {{0, 600}, {1500, 600}, {1500, 800}, {0, 800}};
    txPolygon (Road, 4);

    txSetColor (RGB (255, 255, 255), 5);
    txSetFillColor (RGB (255, 255, 255));
    POINT Polosa[] = {{0, 695}, {1500, 695}, {1500, 705}, {0, 705}};
    txPolygon (Polosa, 4);
    }

void DrawStars(int x, int y, int Mig)
    {
    txSetColor (RGB (255, 255, 0), 1);
    txSetFillColor (RGB (255, 255, 0));
    txCircle (x, y, 3 - Mig);
    }

void DrawRains(int x, int y, int Mig)
    {
    txSetColor (RGB (128, 255, 255), 1);
    txSetFillColor (RGB (128, 255, 255));
    txCircle (x, y, 3 - Mig);
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
