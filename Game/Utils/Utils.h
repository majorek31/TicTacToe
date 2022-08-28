#pragma once
#include "../Game.h"
#include "../Types/GameTypes.h"
class Game;
namespace Utils {
	char ConvectObjectTypeToChar(ObjectType type);
	char GetCharAtPoint(Game* game, int point);
	GameState CheckForGameState(Game* game);
}