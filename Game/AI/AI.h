#pragma once
#include "../Game.h"
class Game;
namespace AI
{
	int PredictNextBotMove(Game* game, ObjectType botObject, AILevel level);
};

