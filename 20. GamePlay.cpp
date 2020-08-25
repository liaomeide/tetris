#include"stdafx.h"

void MakeTetris(struct Tetris*);
void Flag(struct Tetris*);
void welcome();
int color(int c);
void CleanTetris(struct Tetris*);
void Replay(struct Tetris*);
int main();

/**
 * ��ʼ��Ϸ
 */
void Gameplay()
{
  
    struct Tetris t, * tetris = &t;       					//����ṹ���ָ�벢ָ��ṹ�����
    char ch;         									//������ռ�������ı���
    tetris->number = 0;      								//��ʼ������˹������Ϊ0��
    tetris->speed = 300;      							//��ʼ�ƶ��ٶ�Ϊ300ms
    tetris->score = 0;      								//��ʼ��Ϸ�ķ���Ϊ0��
    tetris->level = 1;      								//��ʼ��ϷΪ��1��
    while (1)											//ѭ���������飬ֱ����Ϸ����
    {
        Flag(tetris);     								//�õ���������˹�������͵����
        Temp = tetris->flag;     							//��ס��ǰ����˹�������
        tetris->x = FrameX + 2 * Frame_width + 6;				//���Ԥ�����淽���x����
        tetris->y = FrameY + 10;                            //���Ԥ�����淽���y����
        tetris->flag = tetris->next;                    //�����һ������˹��������
        PrintTetris(tetris);                           //���ô�ӡ����˹���鷽��
        tetris->x = FrameX + Frame_width;  					//�����Ϸ�������ķ���x����
        tetris->y = FrameY - 1;     						//�����Ϸ�������ķ���y����
        tetris->flag = Temp;     							//ȡ����ǰ�Ķ���˹�������
        while (1)  										//���Ʒ��鷽��ֱ�����鲻������
        {
        label:PrintTetris(tetris);					//��ӡ����˹����
            Sleep(tetris->speed);   					//�ӻ�ʱ��
            CleanTetris(tetris);  						//����ۼ�
            Temp1 = tetris->x;    						//��ס���ķ���������ֵ
            Temp2 = tetris->flag;    						//��ס��ǰ����˹�������
            if (_kbhit())       				  	 		//�ж��Ƿ��м������룬������ch������
            {
                ch = _getch();
                if (ch == 75 || ch == 97)     							//�� ������A�������󶯣����ĺ������2
                {
                    tetris->x -= 2;
                }
                if (ch == 77 || ch == 100)     							//�� ������D�������Ҷ������ĺ������2
                {
                    tetris->x += 2;
                }
                if (ch == 80 || ch == 115)     							//�� ������S�����������
                {
                    if (ifMove(tetris) != 0)
                    {
                        tetris->y += 2;
                    }
                    if (ifMove(tetris) == 0)
                    {
                        tetris->y = FrameY + Frame_height - 2;
                    }
                }
                if (ch == 72||ch ==119)     						//�� ������W�������,����ǰ����˳ʱ��ת90��
                {
                    if (tetris->flag >= 2 && tetris->flag <= 3)
                    {
                        tetris->flag++;
                        tetris->flag %= 2;
                        tetris->flag += 2;
                    }
                    if (tetris->flag >= 4 && tetris->flag <= 7)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 4;
                    }
                    if (tetris->flag >= 8 && tetris->flag <= 11)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 8;
                    }
                    if (tetris->flag >= 12 && tetris->flag <= 15)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 12;
                    }
                    if (tetris->flag >= 16 && tetris->flag <= 19)
                    {
                        tetris->flag++;
                        tetris->flag %= 4;
                        tetris->flag += 16;
                    }
                }
                if (ch == 32)     					//���ո������ͣ
                {
                    PrintTetris(tetris);
                    while (1)
                    {
                        if (_kbhit())   			//�ٰ��ո����������Ϸ
                        {
                            ch = _getch();
                            if (ch == 32)
                            {
                                goto label;
                            }
                        }
                    }
                }
                if (ch == 27)
                {
                    system("cls");
                    memset(a, 0, 6400 * sizeof(int));       //��ʼ��BOX����
                    main();
                }
                if (ifMove(tetris) == 0) 			//������ɶ������������Ч
                {
                    tetris->x = Temp1;
                    tetris->flag = Temp2;
                }
                else      						//����ɶ���ִ�в���
                {
                    goto label;
                }
            }
            tetris->y++;     					//���û�в���ָ����������ƶ�
            if (ifMove(tetris) == 0)  				//��������ƶ��Ҳ��ɶ���������ڴ˴�
            {
                tetris->y--;
                PrintTetris(tetris);
                Del_Fullline(tetris);
                break;
            }
        }
        for (i = tetris->y - 2; i < tetris->y + 2; i++)	//��Ϸ�������������鴥����λ��
        {
            if (i == FrameY)
            {
                system("cls");
                gotoxy(29, 7);
                cout << "   \n";
                color(12);
                cout << "\t\t\t��������   ��     ��   ����     \n";
                cout << "\t\t\t��         ����   ��   ��  ��   \n";
                cout << "\t\t\t������     ��  �� ��   ��   ��  \n";
                cout << "\t\t\t��         ��   ����   ��  ��   \n";
                cout << "\t\t\t��������   ��     ��   ����     \n";
                gotoxy(17, 18);
                color(14);
                cout << "��Ҫ������һ��-------1";
                gotoxy(44, 18);
                cout << "�����ˣ��˳���-------2\n";
                int n;
                gotoxy(32, 20);
                cout << "ѡ��1/2����";
                color(11);
                cin >> n;
                switch (n)
                {
                case 1:
                    system("cls");
                    Replay(tetris);       	//���¿�ʼ��Ϸ
                    break;
                case 2:
                    exit(0);
                    break;
                }
            }
        }
        tetris->flag = tetris->next;  			//�����һ������˹�����ͼ��(�ұߴ���)
        tetris->x = FrameX + 2 * Frame_width + 6;
        tetris->y = FrameY + 10;
        CleanTetris(tetris);
    }
}
