#include"stdafx.h"

int color(int c);
void gotoxy(int x, int y);

/**
 * ��������˹����
 */

 /**
  * ��������˹����
  */
void MakeTetris(struct Tetris* tetris)
{
    a[tetris->x][tetris->y] = b[0];    //���ķ���λ�õ�ͼ��״̬
    switch (tetris->flag)      //��7���࣬19������
    {
    case 1:         /*���ַ��� ����
                               ����  */
    {
        color(10);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x + 2][tetris->y - 1] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    case 2:         /*ֱ�߷��� ��������*/
    {
        color(13);
        a[tetris->x - 2][tetris->y] = b[1];
        a[tetris->x + 2][tetris->y] = b[2];
        a[tetris->x + 4][tetris->y] = b[3];
        break;
    }
    case 3:         /*ֱ�߷��� ��
                               ��
                               ��
                               ��  */
    {
        color(13);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x][tetris->y - 2] = b[2];
        a[tetris->x][tetris->y + 1] = b[3];
        break;
    }
    case 4:         /*T�ַ��� ������
                                ��  */
    {
        color(11);
        a[tetris->x - 2][tetris->y] = b[1];
        a[tetris->x + 2][tetris->y] = b[2];
        a[tetris->x][tetris->y + 1] = b[3];
        break;
    }
    case 5:         /* ˳ʱ��90��T�ַ���   ��
                                         ����
                                           ��*/
    {
        color(11);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x][tetris->y + 1] = b[2];
        a[tetris->x - 2][tetris->y] = b[3];
        break;
    }
    case 6:         /* ˳ʱ��180��T�ַ���     ��
                                            ������*/
    {
        color(11);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x - 2][tetris->y] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    case 7:         /* ˳ʱ��270��T�ַ���   ��
                                            ����
                                            ��  */
    {
        color(11);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x][tetris->y + 1] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    case 8:         /* Z�ַ���   ����
                                   ����*/
    {
        color(14);
        a[tetris->x][tetris->y + 1] = b[1];
        a[tetris->x - 2][tetris->y] = b[2];
        a[tetris->x + 2][tetris->y + 1] = b[3];
        break;
    }
    case 9:         /* ˳ʱ��Z�ַ���      ��
                                        ����
                                        ��  */
    {
        color(14);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x - 2][tetris->y] = b[2];
        a[tetris->x - 2][tetris->y + 1] = b[3];
        break;
    }
    case 10:        /* ��תZ�ַ���      ����
                                      ����  */
    {
        color(14);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x - 2][tetris->y - 1] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    case 11:        /* ˳ʱ��Z�ַ���    ��
                                        ����
                                          ��  */
    {
        color(14);
        a[tetris->x][tetris->y + 1] = b[1];
        a[tetris->x - 2][tetris->y - 1] = b[2];
        a[tetris->x - 2][tetris->y] = b[3];
        break;
    }
    case 12:        /* 7�ַ���    ����
                                    ��
                                    ��  */
    {
        color(12);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x][tetris->y + 1] = b[2];
        a[tetris->x - 2][tetris->y - 1] = b[3];
        break;
    }
    case 13:        /* ˳ʱ��90��7�ַ���        ��
                                            ������*/
    {
        color(12);
        a[tetris->x - 2][tetris->y] = b[1];
        a[tetris->x + 2][tetris->y - 1] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    case 14:        /* ˳ʱ��180��7�ַ���      ��
                                               ��
                                               ����  */
    {
        color(12);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x][tetris->y + 1] = b[2];
        a[tetris->x + 2][tetris->y + 1] = b[3];
        break;
    }
    case 15:        /* ˳ʱ��270��7�ַ���    ������
                                             ��    */
    {
        color(12);
        a[tetris->x - 2][tetris->y] = b[1];
        a[tetris->x - 2][tetris->y + 1] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    case 16:        /* ��ת7�ַ���    ����
                                      ��
                                      ��    */
    {
        color(12);
        a[tetris->x][tetris->y + 1] = b[1];
        a[tetris->x][tetris->y - 1] = b[2];
        a[tetris->x + 2][tetris->y - 1] = b[3];
        break;
    }
    case 17:        /* ˳ʱ��ת90��7�ַ���    ������
                                                  ��*/
    {
        color(12);
        a[tetris->x - 2][tetris->y] = b[1];
        a[tetris->x + 2][tetris->y + 1] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    case 18:        /* ˳ʱ��ת180��7�ַ���    ��
                                               ��
                                             ����    */
    {
        color(12);
        a[tetris->x][tetris->y - 1] = b[1];
        a[tetris->x][tetris->y + 1] = b[2];
        a[tetris->x - 2][tetris->y + 1] = b[3];
        break;
    }
    case 19:        /* ˳ָ��ת270��7�ַ���    ��
                                               ������*/
    {
        color(12);
        a[tetris->x - 2][tetris->y] = b[1];
        a[tetris->x - 2][tetris->y - 1] = b[2];
        a[tetris->x + 2][tetris->y] = b[3];
        break;
    }
    }
}