#pragma once
#include "../Game.h"
#include "../Types/GameState.h"
#include "../Types/ObjectType.h"
class Game;
namespace Utils {
	char ConvectObjectTypeToChar(ObjectType type);
	char GetCharAtPoint(Game* game, int point);
	GameState CheckForGameState(Game* game);
}