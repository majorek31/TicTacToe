#include "AI.h"
int AI::PredictNextBotMove(Game* game, ObjectType botObject, AILevel level) {
	switch (level)
	{
	case AILevel::AI_LEVEL_MODE_EASY: {
		int attemptPlace;
		attemptPlace = rand() % 8;
		while (game->GetGameMap()->HasFreeField())
		{
			if (game->GetGameMap()->GetObjectAt(attemptPlace)->GetObjectType() == ObjectType::OBJECT_NULL) {
				return attemptPlace;
			}
		}
		break;
	}
	case AILevel::AI_LEVEL_MODE_MEDIUM:
		break;
	case AILevel::AI_LEVEL_MODE_PROFESSIONAL:
		break;
	default:
		break;
	}
	return -1;
}