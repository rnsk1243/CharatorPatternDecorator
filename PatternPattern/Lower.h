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
		// �ٷ����� ���ڷ����� ���� ����
		m_patternObject->pattern();
		// ������ ������ ������ ���� �̵� �Ϸ��� ��ġ�� ��������
		// �̰��� �������� ������ �̾��� ���� ���ڷ����� �ֻ��� ������ ������ x,y��ǥ�� �����´�..
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
				setImg("��");
				m_y++;
				draw();
				ScreenFlipping();
			}

		}
	}

};

