#pragma once
#include "PatternObject.h"
class CPatternDecorator :
	public CPatternObject
{
public:

	CPatternDecorator()
	{
	}

	~CPatternDecorator()
	{
	}

	virtual char* getImg() = 0;

};

