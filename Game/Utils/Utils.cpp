#include "Utils.h"
char Utils::ConvectObjectTypeToChar(ObjectType type) {
	switch (type)
	{
	case ObjectType::OBJECT_NULL:
		return 0;
		break;
	case ObjectType::OBJECT_CROSS:
		return 'X';
		break;
	case ObjectType::OBJECT_CIRCLE:
		return 'O';
		break;
	default:
		break;
	}
}
char Utils::GetCharAtPoint(Game* game, int point) {
	if (game->GetGameMap()->GetObjectAt(point)->GetObjectType() == ObjectType::OBJECT_NULL)
		return point + 0x31; // 0x31 is offset of '1' in ascii table so we use it to convert point to char.
	return Utils::ConvectObjectTypeToChar(game->GetGameMap()->GetObjectAt(point)->GetObjectType());
}