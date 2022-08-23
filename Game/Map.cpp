#include "Map.h"
BaseObject* Map::GetObjectAt(int point) {
	return &this->map[point];
}