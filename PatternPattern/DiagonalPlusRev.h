#pragma once
#include "PatternDecorator.h"
#include<time.h>

class CDiagonalPlusRev :
	public CPatternDecorator
{
	CPatternObject* m_patternObject;
public:

	CDiagonalPlusRev(CPatternObject* pattern) :m_patternObject(pattern)
	{
	}

	~CDiagonalPlusRev()
	{
	}

	char* getImg()
	{
		m_patternObject->setImg("");

		return m_patternObject->getImg();
	}


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
				setColor(COLOR_GRAY);
				setImg("¡Ú");
				//m_patternObject->setColor(COLOR_GREEN);
				m_y--;
				m_x--;
				//cout << "m_y = " << m_y << endl;
				//m_patternObject->setImg("a");

				draw();
				ScreenFlipping();
			}
		}
	}
};

