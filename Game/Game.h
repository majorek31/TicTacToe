#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Entities/BaseObject.h"
#include "Map.h"
#include "Types/GameTypes.h"
#include "AI/AI.h"
#include "Utils/Utils.h"
#include "Drawing/ConsoleRenderer.h"
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


class Game;