#include "ConsoleRenderer.h"
void ConsoleRenderer::DrawBoard(Game* game) {
	printf("       |      |     \n");
	printf("   %c   |   %c  |   %c \n", Utils::GetCharAtPoint(game, 0), Utils::GetCharAtPoint(game, 1), Utils::GetCharAtPoint(game, 2));
	printf("       |      |     \n");
	printf("----------------------\n");
	printf("       |      |     \n");
	printf("   %c   |   %c  |   %c \n", Utils::GetCharAtPoint(game, 3), Utils::GetCharAtPoint(game, 4), Utils::GetCharAtPoint(game, 5));
	printf("       |      |     \n");
	printf("----------------------\n");
	printf("       |      |     \n");
	printf("   %c   |   %c  |   %c \n", Utils::GetCharAtPoint(game, 6), Utils::GetCharAtPoint(game, 7), Utils::GetCharAtPoint(game, 8));
	printf("       |      |     \n");
}