#include <stdio.h>
#include "Game/Game.h"
int main()
{
    GameStartInfo info;
    info.aiLevel = AILevel::AI_LEVEL_MODE_EASY;
    info.playerObject = ObjectType::OBJECT_CROSS;
    Game* game = new Game(info);
    game->GetGameMap()->GetObjectAt(0)->SetObjectType(ObjectType::OBJECT_CROSS);
    printf_s("%d", game->GetGameMap()->GetObjectAt(0)->GetObjectType());
}