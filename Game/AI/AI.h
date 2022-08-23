#pragma once
#include "../Types/ObjectType.h"
#include "../Types/AILevels.h"
#include "../Types/GameStartInfo.h"
#include "../Map.h"
class AI
{
public:
	static int PredictNextBotMove(Map* map, ObjectType botObject, AILevel level);
};

