#include "Map.h"
BaseObject* Map::GetObjectAt(int point) {
	return &this->map[point];
}
bool Map::HasFreeField() {
	for (int i = 0; i < 9; i++) {
		if (this->map[i].GetObjectType() == ObjectType::OBJECT_NULL)
			return true;
	}
}
bool Map::IsFree(int point) {
	return !(bool)this->GetObjectAt(point)->GetObjectType();
}