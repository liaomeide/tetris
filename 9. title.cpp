/*��ӭ��������ı���*/
#include "stdafx.h"

int color(int c);
void gotoxy(int x,  int y);

void title() {
	color(15); //����ɫ
	gotoxy(24, 3);
	cout << " Ȥ ζ �� �� ˹ �� ��\n"; //�������
	color(11); //����ɫ
	gotoxy(18, 5);
	cout << "��";    //��
	gotoxy(18, 6);  
	cout << "����";  //����
	gotoxy(18, 7);   
	cout << "��";    //��

	color(14); //��ɫ
	gotoxy(26, 6);
	cout << "����"; //����
	gotoxy(28, 7);
	cout << "����"; //  ����

	color(10); //��ɫ
	gotoxy(36, 6);
	cout << "����"; //����
	gotoxy(36, 7);
	cout << "����"; //����

	color(13); //��ɫ
	gotoxy(45, 5);
	cout << "��";  //��
	gotoxy(45, 6);
	cout << "��";  //��
	gotoxy(45, 7);
	cout << "��";  //��
	gotoxy(45, 8);
	cout << "��";  //��

	color(12);  //����ɫ
	gotoxy(56, 6);
	cout << "��";          //��
	gotoxy(52, 7);
	cout << "������";  //������
}