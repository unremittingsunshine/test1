#include "game.h"

void menu()
{
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("xxxx1.play        0.exitxxxx\n");
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
}
void itboard(char board[row][col],int x,int y)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void disboard(char board[row][col], int x, int y)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}
}
void player(char board[row][col])
{
	int x, y;
	printf("请输入落子坐标->\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= 3 && y > 0 && y <= 3)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = 'x';
				break;
			}
			else
			{
				printf("已落子，无法再落子，请重新输入->\n");
			}

		}
		else
			printf("坐标输入错误，请重新输入->\n");
	}
}
void computer(char board[row][col])
{
	printf("电脑落子\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (x > 0 && x <= 3 && y > 0 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;

			}

		}

	}
}
int full(char board[row][col])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char WIN(char board[row][col])
{

	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ')
			return board[x][0];
	}
	for (y = 0; y < col; y++)
	{
		if (board[y][0] == board[y][1] && board[y][1] == board[y][2] && board[y][0] != ' ')
			return board[y][0];
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
			return board[0][0];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		return board[2][0];
	else if (1 == full(board))
	{
		return 'p';
	}
	return 'c';
		
}

	