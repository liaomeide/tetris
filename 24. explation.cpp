#include"stdafx.h"

/*
����˵��
*/

int color(int c);
void gotoxy(int x, int y);
int main();

void explation()
{
    int i, j = 1;
    system("cls");			//����
    color(13);				//��ɫ
    gotoxy(32, 3);			//������ʾλ��
    cout <<"����˵��";
    color(2);
    for (i = 6; i <= 18; i++)   			//������±߿�===
    {
        for (j = 15; j <= 70; j++)  	//������ұ߿�||
        {
            gotoxy(j, i);
            if (i == 6 || i == 18) cout <<"=";
            else if (j == 15 || j == 69) cout <<"||";
        }
    }
    color(3);
    gotoxy(18, 7);
    cout << "tip1: ��ҿ���ͨ�� �� �� ����� �� A D���ƶ�����";
    color(10);
    gotoxy(18, 9);
    cout <<"tip2: ͨ�� ���� W ʹ������ת";
    color(14);
    gotoxy(18, 11);
    cout <<"tip3: ͨ�� ���� S ���ٷ�������";
    color(11);
    gotoxy(18, 13);
    cout <<"tip4: ���ո����ͣ��Ϸ���ٰ��ո������";
    color(4);
    gotoxy(18, 15);
    cout <<"tip5: ��ESC�˳���Ϸ";
    color(6);
    gotoxy(18, 17);
  
    cout << "tip6: �������������ҳ��";
    _getch();                //�����������������
    system("cls");		//����
    main();			//����������
}
