#pragma once
#include "PatternDecorator.h"
#include<time.h>

class CLeft :
	public CPatternDecorator
{
	CPatternObject* m_patternObject;
public:

	CLeft(CPatternObject* pattern) :m_patternObject(pattern)
	{
	}

	~CLeft()
	{
	}

	char* getImg()
	{
		m_patternObject->setImg("");

		return m_patternObject->getImg();
	}

	//void draw() { ScreenPrint(m_x * 2, m_y, m_patternObject->getImg()); }
	
	void pattern()
	{
		m_patternObject->pattern();
		
		//m_patternObject->setXY), m_patternObject->getY());
		m_x = m_patternObject->getX();
		m_y = m_patternObject->getY();
		

		while (m_x > 0)
		{
			static int oldTime = 0;
			int curTime = clock();
			if (curTime - oldTime > 50)
			{
				oldTime = curTime;
				ScreenInit();
				ScreenClear();
				setColor(COLOR_BlUE);
				setImg("¡Ú");
				m_x--;
				
				draw();
				ScreenFlipping();
			}
		}
	}
};

