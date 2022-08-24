#pragma once
#include "../Game.h"
#include "../Types/ObjectType.h"
class Game;
namespace Utils {
	char ConvectObjectTypeToChar(ObjectType type);
	char GetCharAtPoint(Game* game, int point);
}