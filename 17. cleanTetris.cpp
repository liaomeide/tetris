#include"stdafx.h"

void MakeTetris(struct Tetris* );
void gotoxy(int x, int y);

/**
 * �������˹����ĺۼ�
 */
 /**
  * �������˹����ĺۼ�
  */
void CleanTetris(struct Tetris* tetris)
{
    for (i = 0; i < 4; i++)			//����b[4]����4��Ԫ�أ�ѭ����4��Ԫ�أ���ÿ��Ԫ�ص�ֵ��Ϊ0
    {
        b[i] = 0;         		//����b[4]��ÿ��Ԫ�ص�ֵ��Ϊ0
    }
    MakeTetris(tetris);      	//��������˹����
    for (i = tetris->x - 2; i <= tetris->x + 4; i += 2)     //��X����  XΪ���ķ���
    {
        for (j = tetris->y - 2; j <= tetris->y + 1; j++)        /* ��
                                                                 ��
                                                                 X
                                                                 ��	*/
        {
            if (a[i][j] == 0 && j > FrameY) 	//������λ����û��ͼ�������Ҵ�����Ϸ���浱��
            {
                gotoxy(i, j);
                cout <<"  ";    					//�������
            }
        }
    }
}
