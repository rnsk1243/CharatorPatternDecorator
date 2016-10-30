#pragma once
#include"util.h"
#include<iostream>
using namespace std;


class CPatternObject
{
	char* m_objImg;
protected:
	int m_x;
	int m_y;
	unsigned m_color;
public:
	CPatternObject() :m_x(0),m_y(0), m_color(COLOR_WHITE), m_objImg("x") {}
	CPatternObject(int x, int y, unsigned color, char* img = "x" ):m_x(x),m_y(y), m_objImg(img), m_color(color){}

	int getX() { return m_x; }
	int getY() { return m_y; }
	void setXY(int x, int y) { m_x = x; m_y = y; }
	// Ãâ·Â
	void draw() { ScreenPrint(m_x * 2, m_y, m_objImg); }

	~CPatternObject()
	{
	}

	void setColor(unsigned color) { m_color = color; SetColor(m_color); }
	void setImg(char* img) { m_objImg = img; }
	unsigned getColor() { return m_color; }
	
	virtual char* getImg() { return m_objImg; }
	virtual void pattern() = 0;

};

