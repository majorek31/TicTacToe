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
GameState Utils::CheckForGameState(Game* game) {
	ObjectType currentCheckObject = ObjectType::OBJECT_CIRCLE;
	for (int i = 0; i < 2; i++) {
		// horizontal
		if (game->GetGameMap()->GetObjectAt(0)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(1)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(2)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;
		if (game->GetGameMap()->GetObjectAt(3)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(4)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(5)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;
		if (game->GetGameMap()->GetObjectAt(6)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(7)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(8)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;
		// vertical
		if (game->GetGameMap()->GetObjectAt(0)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(3)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(6)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;
		if (game->GetGameMap()->GetObjectAt(1)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(4)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(7)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;
		if (game->GetGameMap()->GetObjectAt(2)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(5)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(8)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;
		// diagonally
		if (game->GetGameMap()->GetObjectAt(0)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(4)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(8)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;
		if (game->GetGameMap()->GetObjectAt(2)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(4)->GetObjectType() == currentCheckObject && game->GetGameMap()->GetObjectAt(6)->GetObjectType() == currentCheckObject)
			return currentCheckObject == ObjectType::OBJECT_CIRCLE ? GameState::STATE_O_WIN : GameState::STATE_X_WIN;

		currentCheckObject = ObjectType::OBJECT_CROSS;
	}
	return GameState::STATE_RUNNING;
}