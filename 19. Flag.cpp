#include"stdafx.h"
 
void MakeTetris(struct Tetris*);

/*
*�����������˹�������͵����
*/

void Flag(struct Tetris* tetris) {
	tetris->number++;  //��ס��������ĸ���
	srand(time(NULL));  //��ʼ�������
	if (tetris->number == 1) {
		tetris->flag = rand() % 19 + 1; //��ס��һ����������
	}
	tetris->next = rand() % 19 + 1; //��ס��һ����������
}