#include"stdafx.h"

int color(int c);
void gotoxy(int x, int y);
void MakeTetris(struct Tetris*);

/*��ӡ����˹����*/
void PrintTetris(struct Tetris* tetris){
	for (i = 0; i < 4; i++) {  //b[4]����4��Ԫ��,ѭ����4��Ԫ��,��ÿ��Ԫ�ص�ֵ��Ϊ1
		b[i] = 1; //����b[4]��ÿ��Ԫ�ص�ֵ��Ϊ1
	}
	MakeTetris(tetris); //������Ϸ����
	for (i = tetris->x - 2; i <= tetris->x + 4; i += 2) {
		for (j = tetris->y - 2; j <= tetris->y + 1; j++) {  //ѭ���������п��ܳ��ֵ�λ��
			if (a[i][j] == 1 && j > FrameY) {  //������λ�����з���
				gotoxy(i, j);
				cout << "��";  //��ӡ�߿���ķ���
			}
		}
	}

	//��ӡ�˵���Ϣ
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 1);  //���ô�ӡλ��	
	color(4);
	cout << "level: ";
	color(12);
	cout << tetris->level;  //����ȼ�
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 3);
	color(4);
	cout << "score: ";
	color(12);
	cout << tetris->score;  //�������
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 5);
	color(4);
	cout << "speed: ";
	color(12);
	cout << tetris->speed << "ms";
	//����ٶ�

}