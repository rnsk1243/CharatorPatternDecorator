#pragma once
#include "PatternObject.h"
#include<time.h>
#include<iostream>
using namespace std;
class CStar :
	public CPatternObject
{
public:

	CStar():CPatternObject(0,0,10,"¡Ú")
	{
	}

	~CStar()
	{
	}

	void pattern()
	{
		while (m_x < WIDTH)
		{
			static int oldTime = 0;
			int curTime = clock();
			if (curTime - oldTime > 30)
			{
				oldTime = curTime;
				ScreenInit();
				ScreenClear();
				setColor(COLOR_CHARTREUSE);
				m_x++;
				draw();
				ScreenFlipping();
			}

		}
	}

};

