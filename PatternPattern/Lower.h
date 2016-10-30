#pragma once
#include "PatternDecorator.h"
#include<time.h>


class CLower :
	public CPatternDecorator
{
	CPatternObject* m_patternObject;
public:

	CLower(CPatternObject* pattern) :m_patternObject(pattern)
	{
		
	}

	~CLower()
	{
	}

	char* getImg()
	{
		m_patternObject->setImg("");

		return m_patternObject->getImg();
	}



	void pattern()
	{
		// 바로이전 데코레이터 패턴 실행
		m_patternObject->pattern();
		// 이전의 패턴이 끝나고 난뒤 이동 완료한 위치값 가져오기
		// 이것을 가져오지 않으면 이어짐 없이 데코레이터 최상위 데코의 생성자 x,y좌표를 가져온다..
		m_x = m_patternObject->getX();
		m_y = m_patternObject->getY();

		//m_patternObject->setXY), m_patternObject->getY());
		
		while (m_y < HEIGHT)
		{
			static int oldTime = 0;
			int curTime = clock();
			if (curTime - oldTime > 30)
			{
				oldTime = curTime;
				ScreenInit();
				ScreenClear();
				setColor(COLOR_RED);
				setImg("★");
				m_y++;
				draw();
				ScreenFlipping();
			}

		}
	}

};

