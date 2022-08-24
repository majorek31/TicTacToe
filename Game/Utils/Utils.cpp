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