#include"stdafx.h"

/*
���¿�ʼ��Ϸ
*/

void DrawGameFrame();
void Gameplay();

void Replay(struct Tetris* tetris) {
	system("cls"); //����
	memset(a, 0, 6400 * sizeof(int)); //��ʼ��a����,���򲻻�������ʾ����,������Ϸֱ�ӽ���
	DrawGameFrame();  //������Ϸ����
	Gameplay(); //��ʼ��Ϸ
}