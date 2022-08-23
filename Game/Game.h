#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Entities/BaseObject.h"
#include "Map.h"
#include "Types/ObjectType.h"
#include "Types/AILevels.h"
#include "Types/GameStartInfo.h"
#include "AI/AI.h"
class Game
{
public:
	Game(GameStartInfo start);
	~Game();
	Map* GetGameMap();
private:
	Map* map;
	GameStartInfo gameStartInfo;
};

