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
	완전 랜덤으로 움직이기
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
		// 실행
		pattern->pattern();

	
	}
	*/
	while (true)
	{
		// 내가 패턴을 주어서 움직이게 하기
		CPatternObject* pattern = new CStar();
		// 아래로이동
		pattern = new CLower(pattern);
		// 왼쪽으로 이동
		pattern = new CLeft(pattern);
		// 위로이동
		pattern = new CUp(pattern);
		// 오른쪽아래로이동
		pattern = new CDiagonalMinus(pattern);
		// 왼쪽으로
		pattern = new CLeft(pattern);
		// 오른쪽 위로
		pattern = new CDiagonalPlus(pattern);
		// 왼쪽 아래로
		pattern = new CDiagonalMinusRev(pattern);
		// 오른쪽으로
		pattern = new CRight(pattern);
		// 왼쪽 위로
		pattern = new CDiagonalPlusRev(pattern);
		// 재생 스타트!!
		pattern->pattern();
	}

	
	
}