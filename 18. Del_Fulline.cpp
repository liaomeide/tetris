#include"stdafx.h"
 
void MakeTetris(struct Tetris*);
void gotoxy(int x, int y);

/* 
*�ж��Ƿ����в�ɾ�����еĶ���˹����
*/

void Del_Fullline(struct Tetris* tetris)	//��ĳ����Frame_width-2������ʱ������������
{
    int k, del_rows = 0;  						//�ֱ����ڼ�¼ĳ�з���ĸ�����ɾ������������ı���
    for (j = FrameY + Frame_height - 1; j >= FrameY + 1; j--)
    {
        k = 0;
        for (i = FrameX + 2; i < FrameX + 2 * Frame_width - 2; i += 2)
        {
            if (a[i][j] == 1) 					//���������δ������ϣ��������������������ж��Ƿ�����
            {
                k++;  							//��¼���з���ĸ���
                if (k == Frame_width - 2)  		//�������
                {
                    for (k = FrameX + 2; k < FrameX + 2 * Frame_width - 2; k += 2)	//ɾ�����еķ���
                    {
                        a[k][j] = 0;
                        gotoxy(k, j);
                        printf("  ");
                    }
                    //���ɾ�������ϵ�λ���з��飬����������ٽ���������һ��λ��
                    for (k = j - 1; k > FrameY; k--)
                    {
                        for (i = FrameX + 2; i < FrameX + 2 * Frame_width - 2; i += 2)
                        {
                            if (a[i][k] == 1)
                            {
                                a[i][k] = 0;
                                gotoxy(i, k);
                                printf("  ");
                                a[i][k + 1] = 1;
                                gotoxy(i, k + 1);
                                printf("��");
                            }
                        }
                    }
                    j++;   				//�������ƺ������ж�ɾ�����Ƿ�����
                    del_rows++;	//��¼ɾ�����������
                }
            }
        }
    }
    tetris->score += 100 * del_rows; 		//ÿɾ��һ�У���100��
    if (del_rows > 0 && (tetris->score % 1000 == 0 || tetris->score / 1000 > tetris->level - 1))
    {        						//�����1000�ּ��ۼ�ɾ��10�У��ٶȼӿ�20ms����һ��
        tetris->speed -= 20;
        tetris->level++;
    }
}

