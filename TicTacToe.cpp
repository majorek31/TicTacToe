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
        if (GameState state = Utils::CheckForGameState(game); state != GameState::STATE_RUNNING) {
            switch (state)
            {
            case GameState::STATE_DRAW:
                printf("There is a Draw on the board! Nice!\n");
                break;
            case GameState::STATE_X_WIN:
                printf("Congrats X you have won the game!\n");
                break;
            case GameState::STATE_O_WIN:
                printf("Congrats O you have won the game!\n");
                break;
            default:
                break;
            }
            Sleep(5000);
            return 0;
        }
        printf("\nIt's your turn: "); scanf_s("%d", &pnt);
        if (pnt < 1 || pnt > 9) {
            printf("\nInput is out of order! Please type number from 1-9 range");
            Sleep(600);
            continue;
        }
        pnt--;
        if (game->GetGameMap()->IsFree(pnt)) {
            game->GetGameMap()->GetObjectAt(pnt)->SetObjectType(info.playerObject);
            if (game->GetGameMap()->HasFreeField())
                game->GetGameMap()->GetObjectAt(AI::PredictNextBotMove(game, ObjectType::OBJECT_CIRCLE, info.aiLevel))->SetObjectType(ObjectType::OBJECT_CIRCLE);
        }
        else {
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