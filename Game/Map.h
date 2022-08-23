#pragma once
#include "Entities/BaseObject.h"
class Map
{
public:
	BaseObject* GetObjectAt(int point);
private:
	BaseObject map[9];
};

