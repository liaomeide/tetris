#include"stdafx.h"

/**
 * ��Ϸ����
 */

int color(int c);
void gotoxy(int x, int y);
void welcome();
int main();

void rule()
{
    int i, j = 1;
    system("cls");
    color(13);
    gotoxy(34, 3);
    cout <<"��Ϸ����";
    color(2);
    for (i = 6; i <= 20; i++)   			//������±߿�===
    {
        for (j = 12; j <= 70; j++)  	//������ұ߿�||
        {
            gotoxy(j, i);
            if (i == 6 || i == 20) cout <<"=";
            else if (j == 12 || j == 69) cout <<"||";
        }
    }
    color(12);
    gotoxy(16, 7);
    cout <<"tip1: ��ͬ��״��С�������Ļ�Ϸ����£����ͨ������";
    gotoxy(22, 9);
    cout <<"�����λ�úͷ���ʹ��������Ļ�ײ�ƴ��������";
    gotoxy(22, 11);
    cout <<"һ�л���";
    color(14);
    gotoxy(16, 13);
    cout <<"tip2: ÿ����һ�У���������100";
    color(11);
    gotoxy(16, 15);
    cout <<"tip3: ÿ�ۼ�1000�֣�������һ���ȼ�";
    color(10);
    gotoxy(16, 17);
    cout <<"tip4: �����ȼ���ʹ���������ٶȼӿ죬��Ϸ�ѶȼӴ�";
    color(6);
    gotoxy(16, 19);
   
    cout << "tip5: �������������ҳ��";
    _getch();                //�����������������
    system("cls");
    main();
}
