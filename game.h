#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3   //���Ŷ���
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̺���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMOve(char board[ROW][COL], int row, int col);

//�ж���Ϸ�Ƿ����
char IsWin(char board[ROW][COL], int row, int col);
//1�����Ӯ��-*     2.����Ӯ��-#     3.ƽ��-Q       4.��Ϸ����-C