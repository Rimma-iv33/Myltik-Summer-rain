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
#include "RimmaLib.h"


void DrawSky(COLORREF SkyColor);
void DrawGround(COLORREF GroundColor);
void DrawRoad();
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


