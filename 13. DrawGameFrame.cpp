#include "stdafx.h"

int color(int c);
void gotoxy(int x, int y);

/**
 * ������Ϸ����
 */
void DrawGameFrame(){
	gotoxy(FrameX + Frame_width - 5, FrameY - 2);//������Ϸ���Ƶ���ʾλ��
	color(11);//��������ɫ����Ϊ����ɫ
	cout << "Ȥζ����˹����";//��ӡ��Ϸ����
	
	
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 7);//�����ϱ߿����ʾλ��
	color(2);//��������ʾΪ����ɫ
	cout << "**********"; //��ӡ��һ�����ַ�����ϱ߿�
	gotoxy(FrameX + 2 * Frame_width + 13, FrameY + 7);
	color(3);//��������ɫ����Ϊ������ɫ
	cout << "��һ���ַ���";
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 13);//��ӡ��һ�����ַ����ϱ߿�
	color(2);
	cout << "**********"; //��ӡ��һ�����ַ�����±߿�

	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 17);
	color(14);//��ɫ
	cout << "��������ת";
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 19);
	cout << "�ո�: ��ͣ��Ϸ";
	gotoxy(FrameX + 2 * Frame_width + 3, FrameY + 15);
	cout << " Esc���˳���Ϸ";

	gotoxy(FrameX, FrameY);
	color(12);
	cout << "�X";//��ӡ���Ͽ��
	gotoxy(FrameX + 2  *Frame_width - 2, FrameY);
	cout << "�[";//��ӡ���Ͽ��
	gotoxy(FrameX, FrameY + Frame_height);
	cout << "�^";//��ӡ���¿��
	gotoxy(FrameX + 2 * Frame_width - 2, Frame_height);
	cout << "�a";//��ӡ���¿��

	a[FrameX][FrameY + Frame_height] = 2;//��ס�ô�����ͼ��
	a[FrameX + 2 * Frame_width - 2][FrameY + Frame_height] = 2;

	for (i = 2; i < 2 * Frame_width - 2; i += 2) {
		gotoxy(FrameX + i, FrameY);
		cout << "�T";  //��ӡ�Ϻ��
	}

	for (i = 2; i < 2 * Frame_width - 2; i += 2) {
		gotoxy(FrameX + i, FrameY + Frame_height);
		cout << "�T";  //��ӡ�º��
		a[FrameX + i][FrameY + Frame_height] = 2;//����º��Ϊ��Ϸ�߽�,��ֹ�������
	}

	for (i = 1; i < Frame_height; i ++) {
		gotoxy(FrameX, FrameY + i);
		cout << "�U";  //��ӡ������
		a[FrameX ][FrameY + i] = 2;//���������Ϊ��Ϸ�߽�,��ֹ�������
	}

	for (i = 1; i < Frame_height; i ++) {
		gotoxy(FrameX + 2 * Frame_width - 2, FrameY +i );
		cout << "�U";  //��ӡ������
		a[FrameX + 2 * Frame_width - 2][FrameY + i] = 2;//���������Ϊ��Ϸ�߽�,��ֹ�������
	}
}
