#pragma once
#include "../Game.h"
class Game;
class AI
{
public:
	static int PredictNextBotMove(Game* game, ObjectType botObject, AILevel level);
};

