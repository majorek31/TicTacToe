#include <stdio.h>
#include "Game/Game.h"
int main()
{
    GameStartInfo info;
    info.aiLevel = AILevel::AI_LEVEL_MODE_EASY;
    info.playerObject = ObjectType::OBJECT_CROSS;
    Game* game = new Game(info);
    game->GetGameMap()->GetObjectAt(AI::PredictNextBotMove(game, ObjectType::OBJECT_CIRCLE, AILevel::AI_LEVEL_MODE_EASY))->SetObjectType(ObjectType::OBJECT_CIRCLE);
    ConsoleRenderer::DrawBoard(game);
    for (size_t i = 0; i < 9; i++)
    {
        //printf("%c ", Utils::ConvectObjectTypeToChar(game->GetGameMap()->GetObjectAt(i)->GetObjectType()));
        //printf("%d\n", i);
    }
}