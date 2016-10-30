#pragma once

#define ENTER	13
#define LEFT    75
#define RIGHT   77
#define UP		72
#define DOWN	80
#define SPACE	32

#define WIDTH 20
#define HEIGHT 20

#define COLOR_BLACK 0
#define COLOR_BlUE 1
#define COLOR_GREEN 2
#define COLOR_JADEGREEN 3
#define COLOR_RED 4
#define COLOR_WINE 5
#define COLOR_YELLOW 6
#define COLOR_WHITE 7
#define COLOR_GRAY 8
#define COLOR_PALEBLUE 9
#define COLOR_LIGHTGREEN 10
#define COLOR_LIGHTBLUISHGREEN 11
#define COLOR_SCARLET 12
#define COLOR_LAVENDER 13
#define COLOR_CHARTREUSE 14
#define COLOR_DARKGRAY 15

enum {BLANK, TARGET, OBJECT};

void gotoxy(int x, int y);

void ScreenInit();
void ScreenFlipping();
void ScreenClear();
void ScreenRelease();
void ScreenPrint( int x, int y, char* string );
void SetColor( unsigned short color );
