#pragma once
#include "PatternDecorator.h"
#include<time.h>

class CDiagonalMinusRev :
	public CPatternDecorator
{
	CPatternObject* m_patternObject;
public:

	CDiagonalMinusRev(CPatternObject* pattern) :m_patternObject(pattern)
	{
	}

	~CDiagonalMinusRev()
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
				setColor(COLOR_JADEGREEN);
				setImg("¡Ú");
				//m_patternObject->setColor(COLOR_GREEN);
				m_y++;
				m_x--;
				//cout << "m_y = " << m_y << endl;
				//cout << "m_x = " << m_x << endl;
				//m_patternObject->setImg("a");

				draw();
				ScreenFlipping();
			}
		}
	}
};

