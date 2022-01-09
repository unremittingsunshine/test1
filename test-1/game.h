#define row 3
#define col 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void test();
void game();
void itboard(char board[row][col], int x, int y);
void disboard(char board[row][col], int x, int y);
void player(char board[row][col]);
void computer(char board[row][col]);
char WIN(char board[row][col]);
int full(char board[row][col]);