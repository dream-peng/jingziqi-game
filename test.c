#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"game.h"
void menu()
{
	printf("******************************\n");
	printf("**********  1.play   *********\n");
	printf("**********  0.exit   *********\n");
	printf("******************************\n");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret =IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMOve(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret =IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("You win!!!\n");
	else if (ret == '#')
		printf("You lose!!!\n");
	else
		printf("平局\n");

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("游戏开始\n");
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
		}

	} while (input);
	return 0;
}
