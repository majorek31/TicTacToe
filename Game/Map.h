#pragma once
#include "Entities/BaseObject.h"
class Map
{
public:
	BaseObject* GetObjectAt(int point);
	bool HasFreeField();
private:
	BaseObject map[9];
};

