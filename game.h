#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3   //符号定义
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMOve(char board[ROW][COL], int row, int col);

//判断游戏是否结束
char IsWin(char board[ROW][COL], int row, int col);
//1。玩家赢了-*     2.电脑赢了-#     3.平局-Q       4.游戏继续-C