#include"PatternObject.h"
#include"Star.h"
#include"Lower.h"
#include"Left.h"
#include"Right.h"
#include"Up.h"
#include"DiagonalMinus.h"
#include"DiagonalMinusRev.h"
#include"DiagonalPlus.h"
#include"DiagonalPlusRev.h"
#include"util.h"
#include<iostream>
using namespace std;

void main()
{
	
	int randomVal = 0;
	srand((unsigned int)time(NULL));
	
	/*
	���� �������� �����̱�
	while (true)
	{
		CPatternObject* pattern = new CStar();
		randomVal = (rand() % 3) + 1;

		if (pattern->getX() == 0 && pattern->getY() == 0)
		{
			switch (randomVal)
			{
			case 1:
				pattern = new CRight(pattern);
				break;
			case 2:
				pattern = new CDiagonalMinus(pattern);
				break;
			case 3:
				pattern = new CLower(pattern);
				break;
			}
		}

		pattern->pattern();
		randomVal = rand() % 3 + 1;

		if (pattern->getX() == 20 && pattern->getY() == 0)
		{
			switch (randomVal)
			{
			case 1:
				pattern = new CLeft(pattern);
				break;
			case 2:
				pattern = new CDiagonalMinusRev(pattern);
				break;
			case 3:
				pattern = new CLower(pattern);
				break;
			}
		}
		pattern->pattern();
		randomVal = rand() % 3 + 1;

		if (pattern->getX() == 20 && pattern->getY() == 20)
		{
			switch (randomVal)
			{
			case 1:
				pattern = new CLeft(pattern);
				break;
			case 2:
				pattern = new CDiagonalPlusRev(pattern);
				break;
			case 3:
				pattern = new CUp(pattern);
				break;
			}
		}
		pattern->pattern();
		randomVal = rand() % 3 + 1;

		if (pattern->getX() == 0 && pattern->getY() == 20)
		{
			switch (randomVal)
			{
			case 1:
				pattern = new CUp(pattern);
				break;
			case 2:
				pattern = new CDiagonalPlus(pattern);
				break;
			case 3:
				pattern = new CRight(pattern);
				break;
			}
		}
		// ����
		pattern->pattern();

	
	}
	*/
	while (true)
	{
		// ���� ������ �־ �����̰� �ϱ�
		CPatternObject* pattern = new CStar();
		// �Ʒ����̵�
		pattern = new CLower(pattern);
		// �������� �̵�
		pattern = new CLeft(pattern);
		// �����̵�
		pattern = new CUp(pattern);
		// �����ʾƷ����̵�
		pattern = new CDiagonalMinus(pattern);
		// ��������
		pattern = new CLeft(pattern);
		// ������ ����
		pattern = new CDiagonalPlus(pattern);
		// ���� �Ʒ���
		pattern = new CDiagonalMinusRev(pattern);
		// ����������
		pattern = new CRight(pattern);
		// ���� ����
		pattern = new CDiagonalPlusRev(pattern);
		// ��� ��ŸƮ!!
		pattern->pattern();
	}

	
	
}