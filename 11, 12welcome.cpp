#include "stdafx.h"


int color(int c);
void gotoxy(int x, int y);
void DrawGameFrame();
void Gameplay();
void explation();
void rule();
void close();
int main();

/*��Ʋ˵�ѡ��߿�*/
void welcome() {
	int n;
	int i = 1;
	int j = 1;
	color(14); //��ɫ�߿�
	for (int i = 9; i <= 20; i++) { //ѭ��y�����꣬��ӡ������±߿�===
		for (int j = 15; j <= 60; j++) {  //ѭ��x�����꣬��ӡ������ұ߿�||
			gotoxy(j, i);
			if (i == 9 || i == 20)
				cout << "=";
			else if (j == 15 || j == 59)
				cout << "||";
		}
	}

	color(12); //����������ɫΪ��ɫ
	gotoxy(25, 12); //������ʾλ��
	cout << "1. ��ʼ��Ϸ";
	gotoxy(40, 12);
	cout << "2. ����˵��";
	gotoxy(25, 17);
	cout << "3. ��Ϸ����";
	gotoxy(40, 17);
	cout << "4. �˳�";
	gotoxy(21, 22);
	color(3);
	cout << "��ѡ��[1 2 3 4]��[ ]\b\b";
	color(14);

	
	while (1) {
		cin >> n;
		if (n < 9) {
			switch (n) {
			case 1:
				system("cls");  //����1����
				DrawGameFrame();
				Gameplay();
				break;
			case 2:
				explation();
				break;
			case 3:
				rule();
				break;
			case 4:
				close();
				break;
			}
		}
		else {
			cout << " ";
		}

	}
}
	