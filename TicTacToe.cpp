#if _WIN32
#include <Windows.h>
#endif // _WIN32

#include <stdio.h>
#include "Game/Game.h"
int main()
{
    GameStartInfo info;
    info.aiLevel = AILevel::AI_LEVEL_MODE_EASY;
    info.playerObject = ObjectType::OBJECT_CROSS;
    Game* game = new Game(info);
    
    while (true)
    {
        #if _WIN32
            system("cls");
        #endif // _WIN32 // TODO: do it in correct way instead of calling system.
        int pnt;
        ConsoleRenderer::DrawBoard(game);
        printf("\nIt's your turn: "); scanf_s("%d", &pnt);
        pnt--;
        if (game->GetGameMap()->IsFree(pnt)) {
            game->GetGameMap()->GetObjectAt(pnt)->SetObjectType(info.playerObject);
            if (game->GetGameMap()->HasFreeField())
                game->GetGameMap()->GetObjectAt(AI::PredictNextBotMove(game, ObjectType::OBJECT_CIRCLE, info.aiLevel))->SetObjectType(ObjectType::OBJECT_CIRCLE);
        } else {
            printf("\nThis is already taken by %c", Utils::ConvectObjectTypeToChar(game->GetGameMap()->GetObjectAt(pnt)->GetObjectType()));
            Sleep(600);
        }
    }
    for (size_t i = 0; i < 9; i++)
    {
        //printf("%c ", Utils::ConvectObjectTypeToChar(game->GetGameMap()->GetObjectAt(i)->GetObjectType()));
        //printf("%d\n", i);
    }
}