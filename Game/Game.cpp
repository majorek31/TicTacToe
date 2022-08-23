#include "Game.h"
Game::Game(GameStartInfo info) {
	this->gameStartInfo = info;
	this->map = new Map();
}
Map* Game::GetGameMap() {
	return this->map;
}
Game::~Game() {
	delete map;
}